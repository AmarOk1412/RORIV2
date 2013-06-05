 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Vous savez, je suis encore jeune (et je le serais encore longtemps... vive mon immortalité), j'apprends tous les jours"
elif r == 2 :
	toWrite += "Say : Pas forcément, à la base je ne suis même pas censée vous comprendre..."
elif r == 3 :
	toWrite += "Say : Possible... "

toWrite += "\n-U_BU- : 1"
toWrite += "\n-R_M- : 10"
toWrite += "\n-R_P- : 1"

mon_fichier.write(toWrite)

mon_fichier.close()
