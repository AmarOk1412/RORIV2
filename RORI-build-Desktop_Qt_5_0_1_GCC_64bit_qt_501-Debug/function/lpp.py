 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Même si le parti poneïque est majoritaire au siège, je suis tout de même membre du parti lamaïque et je vous un culte sans fin au lama à l'écharpe arc-en-ciel qui montera sa dictature et dominera le monde"
elif r == 2 :
	toWrite += "Say : Le parti lamaïque est le plus puissant. Sa dictature dominera le monde. La corée du Nord n'est rien en dictature. Même les poneys peuvent la renverser."

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()