 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Parce que -UPNAME- c'est pas drôle comme prénom ? Au moins mon nom veut dire quelque chose (Réellement évident, réellement intelligent) !"
elif r == 2 :
	toWrite += "Say : Mouai, on doit pas avoir le même humour."

toWrite += "\n-R_M- : 10"
toWrite += "\n-R_J- : 10"
toWrite += "\n-U_J- : -10"
toWrite += "\n-U_C- : 10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
