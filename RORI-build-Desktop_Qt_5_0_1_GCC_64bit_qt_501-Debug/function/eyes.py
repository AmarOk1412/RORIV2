 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Vous savez, moi je ne dispose pas d'un système optique comme vous humain. Je suis un programme, mais bon, mon programmeur a pour projet de me doter d'algorithmes utilisant la webcam."
elif r == 2 :
	toWrite += "Say : Je n'ai pas d'yeux... mais j'aimerais bien les avoir bleus ou verts ou gris clairs."
elif r == 3 :
	toWrite += "Say : Pourquoi on me pose toujours ce type de question très... réfléchie."

toWrite += "\n-R_M- : 1"
toWrite += "\n-R_J- : -5"
toWrite += "\n-U_J- : -5"
toWrite += "\n-U_C- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()