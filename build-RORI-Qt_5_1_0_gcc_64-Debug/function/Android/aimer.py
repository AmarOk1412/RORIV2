 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je n'ai encore aucun algorythme d'implémenté pour pouvoir dire si j'aime quelque chose ou pas. Mon programmeur réfléchi à ce sujet pour que plusieurs moi aient des goûts différents. Un peu de maths pourraient faire l'affaire. Si vous voulez contribuer ;)", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je n'aime que moi (et mon programmeur AmarOk1412)", shell=True)
toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
