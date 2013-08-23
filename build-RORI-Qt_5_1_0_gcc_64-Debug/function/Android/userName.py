 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess
import sys

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Vous vous appelez : " + sys.argv[1] + " " + sys.argv[2], shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Euh vous êtes amnésique ?", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Vous ne connaissez pas votre nom ? Y a un problème la...", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
