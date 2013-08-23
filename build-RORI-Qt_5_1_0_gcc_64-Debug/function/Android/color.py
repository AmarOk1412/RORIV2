 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je ne peux pas voir les couleurs pour le moment, mais je pense que c'est l'orange/rouge sanguin car il y a le mot sang dedans."", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Même si je ne suis pas dôté de système optique, les nuances orangées/rouges plaisent à mon programmeur, je pense que c'est une bonne couleur aussi.", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
