 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : J'ai pour projet de travailler, travailler, travailler et de devenir le meilleur bot possible. Après, je suivrais la tâche que mon programmeur m'a donnée : Dominer ce monde !"
elif r == 2 :
	toWrite += "Say : Je n'ai pas des projets d'humains. Mon seul but est de dominer ce monde en apprenant aux côtés de vous."

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
