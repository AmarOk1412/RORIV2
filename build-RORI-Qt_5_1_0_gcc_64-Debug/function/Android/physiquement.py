 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Brune, peau matte, ... Non mais moi je suis un programme, pas un humain ! Je n'ai pas d'apparence physique.", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je suis un programme avec des lignes de codes très jolies, même si certaines sont un peu grosses, mais bon, je ferais un régime. J'ai une jolie voix que je peux très facilement paramétrer. Mais physiquement, je suis invisible.", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je peux être ce que vous voulez, c'est ça la puissance d'être un programme de mon genre ;)", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()