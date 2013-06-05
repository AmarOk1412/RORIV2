 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys
import subprocess
import os

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : J'aime tous les styles de musique !"
elif r == 2 :
	toWrite += "Say : lalalalilala. Viva la musica"
elif r == 3 :
	toWrite += "Say : J'aime la musique (tous les styles confondus, mais j'adore Glados, lindsey Stirling, et beaucoup d'autres) et faut dire que l'on s'embête un peu..."
toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -1"
toWrite += "\n-U_M- : -10"
toWrite += "\n-U_BU- : -10"

subprocess.call("rhythmbox --playlists-file=test", shell = True)

mon_fichier.write(toWrite)

mon_fichier.close()
