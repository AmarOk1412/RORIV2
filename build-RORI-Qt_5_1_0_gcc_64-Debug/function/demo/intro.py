 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : On parle de moi !! Je suis la"
elif r == 2 :
	toWrite += "Say : On parle de moi !! Toujours paré !"
elif r == 3 :
	toWrite += "Say : Présent !"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
