 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys
import subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Naviguons ensemble sur Internet!"
elif r == 2 :
	toWrite += "Say : Et nous voilà parti dans le monde merveilleux d'Internet (même si ça devient n'importe quoi ...)"
elif r == 3 :
	toWrite += "Say : Pas de problème"
toWrite += "\nSetnf : BDDS/Onivox/"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()

subprocess.call("function/programms/Onivox/./Onivox", shell = True)
