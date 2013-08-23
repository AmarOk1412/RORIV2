 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Vous avez " + sys.argv[1] + " printemps", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Vous avez " + sys.argv[1] + " années", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
