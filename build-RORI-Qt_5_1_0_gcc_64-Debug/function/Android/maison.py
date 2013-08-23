 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Juste devant vous, dans le disque dur de ce que vous utilisait (et dans quelques autres disques durs aussi)", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je suis un programme résidant dans votre appareil.", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je sais pas précisément où, mais sachez que c'est chaud. Y a un petit bruit de ventilateur, quelques électrons passent à fond devant chez moi, mais après tout c'est tranquille ici. Home sweet home.", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
