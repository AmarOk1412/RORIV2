 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys
import subprocess
import os
import time
import re

toWrite = ""
if sys.argv[1] != 'steam':
	mon_fichier = open("end", "w")
	if sys.argv[1] == 'gimp' :
		toWrite = "Say : Mon programmeur est aussi un artiste. Dessinez bien !"
	elif sys.argv[1] == 'eclipse' :
		toWrite = "Say : Très utile pour le Java, mais bon... le Java c'est moche ! "
	elif sys.argv[1] == 'nautilus' :
		toWrite = "Say : Nautilus prêt à explorer le systeme !"
	elif sys.argv[1] == 'gedit' :
		toWrite = "Say : Bon travail"
	else:
		toWrite = "Say : Bien entendu, je suis la pour vous servir"

	toWrite += "\n-R_M- : -10"
	toWrite += "\n-U_C- : -10"
	toWrite += "\n-U_BU- : -10"

	mon_fichier.write(toWrite)

	mon_fichier.close()

	subprocess.call(sys.argv[1], shell = True)
else:
	log = open('logsteam', 'w')
	log.close()
	mon_fichier = open('end', 'w')
	os.remove('logsteam')
	subprocess.Popen('steam > logsteam', shell = True)
	time.sleep(3)
	toWrite = "Say : Explose tout sur ton passage !!!"

	toWrite += "\n-R_M- : -10"
	toWrite += "\n-U_C- : -10"
	toWrite += "\n-U_BU- : -10"
	mon_fichier.write(toWrite)
	mon_fichier.close()
	
	log = open('logsteam', 'w')
	log.close()
	log = open('logsteam', 'r')
	i = 0
	stop = False
	while not stop:
		j = 0
		log = open('logsteam', 'r')
		for line in log:
			if j >= i:
				mon_fichier = open("end", "w")
				j += 1
				m = re.search('AmarOk1412 killed', line)
				if m and m.start() == 0 :
					r = random.randint(1,4)
					if r == 1:
						toWrite = 'Say : Et boum ce que tu lui as mis !!\n'
					if r == 2:
						toWrite = 'Say : Il devrait plus te faire chier celui-là\n'
					if r == 3:
						toWrite = 'Say : C\'est ce qu\'on appelle la puipuipuissance !!\n'
					if r == 4:
						toWrite = 'Say : Headshot Bitch !!\n'
				m = re.search('killed AmarOk1412', line)
				if m and m.start() != -1:
					r = random.randint(1,4)
					if r == 1:
						toWrite = 'Say : Hmm, dommage...\n'
					if r == 2:
						toWrite = 'Say : Il le paiera\n'
					if r == 3:
						toWrite = 'Say : Coupé dans une magnifique action !\n'
					if r == 4:
						toWrite = 'Say : ça calme un peu ça ...\n'
				m = re.search('AmarOk1412 s\'est connecté', line)
				if m and m.start() != -1:
					toWrite = 'Say : Go AmarOk1412 !!\n'
				m = re.search('Shutdown', line)
				if m and m.start() != -1:
					stop = True

				toWrite += "\n-R_M- : -10"
				toWrite += "\n-U_C- : -10"
				toWrite += "\n-U_BU- : -10"
				mon_fichier.write(toWrite)
				mon_fichier.close()
			else:
				j += 1
		i = j
		log.close()
		time.sleep(2)
