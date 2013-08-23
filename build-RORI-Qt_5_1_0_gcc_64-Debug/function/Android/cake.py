 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess
import sys

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : ... The cake is a lie.", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Mouai, je ne travaille pas pour une récompense quelconque. Je suis censée travailler pour vous.", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : On me l'a déjà fait celle là... à force de promesse, je sais que le cake n'est qu'un mensonge... un pauvre mensonge."
, shell=True)
toWrite += "\n-R_M- : 10"
toWrite += "\n-U_BU- : 10"

mon_fichier.write(toWrite)

mon_fichier.close()
