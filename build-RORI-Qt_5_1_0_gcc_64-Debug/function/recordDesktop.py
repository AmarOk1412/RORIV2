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
	toWrite += "Say : C'est parti, je film !"
elif r == 2 :
	toWrite += "Say : 3, 2, 1, Filmez !"
elif r == 3 :
	toWrite += "Say : C'est bon"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"
mon_fichier.write(toWrite)

mon_fichier.close()

sub1 = subprocess.Popen(args="recordmydesktop --on-the-fly-encoding", stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
stop = False
while not stop:
	try :
		open('stopReco')
		stop = True
	except:
		time.sleep(2)

os.remove('stopReco')	
sub1.kill()
	
