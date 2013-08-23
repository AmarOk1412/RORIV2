 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Je n'ai encore aucun algorythme d'implémenté pour pouvoir dire si j'aime quelque chose ou pas. Mon programmeur réfléchi à ce sujet pour que plusieurs moi aient des goûts différents. Un peu de maths pourraient faire l'affaire. Si vous voulez contribuer ;)"
elif r == 2 :
	toWrite += "Say : Je n'aime que moi (et mon programmeur AmarOk1412)"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
