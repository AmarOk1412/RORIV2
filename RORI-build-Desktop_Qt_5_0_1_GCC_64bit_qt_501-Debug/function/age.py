 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Mon Programmeur adoré m'a créée en 2012. Je lui dois la vie ;)"
elif r == 2 :
	toWrite += "Say : Mon taré d'inventeur m'a créée en 2012 il me semble, se sentait-il seul ?"
elif r == 3 :
	toWrite += "Say : Vous savez, étant \"immortelle\", je suis donc très jeune."

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
