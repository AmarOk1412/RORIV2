 #!/usr/bin/python
 # -*- coding: latin-1 -*-
#Soit on utilise cheese (une commande à lancer), soit opencv pour plus de controle... mais pour le moment c'est cheese
import random 
import sys
import subprocess
import os
import time
import re

toWrite = ""
mon_fichier = open("end", "w")
r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : On remballe, le tournage est fini !"
elif r == 2 :
	toWrite += "Say : Bon bah voilà, on a bien travaillé (surtout moi) !"
elif r == 3 :
	toWrite += "Say : Pas de problème"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"
mon_fichier.write(toWrite)

mon_fichier.close()

open('stopReco')
