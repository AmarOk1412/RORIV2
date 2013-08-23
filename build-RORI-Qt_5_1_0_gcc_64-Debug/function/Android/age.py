 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Mon Programmeur adoré m'a créée en 2012. Je lui dois la vie ;)", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Mon taré d'inventeur m'a créée en 2012 il me semble, se sentait-il seul ?", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Vous savez, étant \"immortelle\", je suis donc très jeune.", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()

