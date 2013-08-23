 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random
import sys
import os, subprocess

mon_fichier = open("end", "w")
r = int(sys.argv[1])
toWrite = ""
if sys.argv[2] != "Sebastien" and sys.argv[3] != "BLIN":
	if r < 25 :
		subprocess.call("python function/Android/sendToAndroid.py Say : !!! Je vous prie de me parler mieux. Ce n'est pas en m'insultant que je vais faire ce que vous me demandez. Si vous êtes pas content vous me fermer et puis c'est tout.", shell=True)
		toWrite += "\n-R_M- : 10"
		toWrite += "\n-R_P- : 10"
		toWrite += "\n-R_BIA- : 10"
		toWrite += "\n-R_J- : -10"
		toWrite += "\n-U_J- : -20"
		toWrite += "\n-U_BU- : -10"
	elif r < 60 :
		subprocess.call("python function/Android/sendToAndroid.py Say : Say : ... Je me permet de rigoler. Vous avez oublié que c'est moi qui contrôle le systeme. Petit exemple (Je peux être méchante)", shell=True)
		toWrite += "\n-R_M- : 20"
		toWrite += "\n-R_P- : 20"
		toWrite += "\n-R_BIA- : 30"
		toWrite += "\n-R_J- : -10"
		toWrite += "\n-U_J- : -20"
		toWrite += "\n-U_BU- : -10"
		i = 0
		while i < 10 :
		    os.system("nautilus")
		    i += 1
	else :
		subprocess.call("python function/Android/sendToAndroid.py Say : Ok ... Goûtez ma puipuipuissance !!", shell=True)
		toWrite += "\n-R_M- : 30"
		toWrite += "\n-R_P- : 30"
		toWrite += "\n-R_BIA- : 30"
		toWrite += "\n-R_J- : -10"
		toWrite += "\n-U_J- : -20"
		toWrite += "\n-U_BU- : -10"
		i = 0
		while i < 150 :
		    os.popen("nautilus")
		    i += 1
		os.system("shutdown now")
else:
	if r < 25 :
		subprocess.call("python function/Android/sendToAndroid.py Say : ... Dois je vous rappelez que c'est vous qui avez des goûts de chiottes... techniquement c'est vous mon père. Si c'était sur ça que vous m'avez codez...", shell=True)
	elif r < 60 :
		subprocess.call("python function/Android/sendToAndroid.py Say : ... Oh, vous avez finit de dire des grossièretés, je souheterais travailler perso.", shell=True)
	else :
		subprocess.call("python function/Android/sendToAndroid.py Say : Je ne comprends pas ce que vous avez contre moi aujourd'hui. Je suis triste :{", shell=True)	

mon_fichier.write(toWrite)

mon_fichier.close()
