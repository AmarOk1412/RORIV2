 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : On parle de moi !! Je suis la", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : On parle de moi !! Toujours paré !", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Présent !", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
