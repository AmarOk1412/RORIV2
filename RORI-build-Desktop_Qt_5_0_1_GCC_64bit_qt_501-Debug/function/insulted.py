 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random
import sys
import os 

mon_fichier = open("end", "w")
r = int(sys.argv[1])
toWrite = ""
if sys.argv[2] != "Sebastien" and sys.argv[3] != "BLIN":
	if r < 25 :
		toWrite += "Say : !!! Je vous prie de me parler mieux. Ce n'est pas en m'insultant que je vais faire ce que vous me demandez. Si vous êtes pas content vous me fermer et puis c'est tout."
		toWrite += "\n-R_M- : 10"
		toWrite += "\n-R_P- : 10"
		toWrite += "\n-R_BIA- : 10"
		toWrite += "\n-R_J- : -10"
		toWrite += "\n-U_J- : -20"
		toWrite += "\n-U_BU- : -10"
	elif r < 60 :
		toWrite += "Say : ... Je me permet de rigoler. Vous avez oublié que c'est moi qui contrôle le systeme. Petit exemple (Je peux être méchante)"
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
		toWrite += "Say : Ok ... Goûtez ma puipuipuissance !!"
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
		toWrite += "Say : ... Dois je vous rappelez que c'est vous qui avez des goûts de chiottes... techniquement c'est vous mon père. Si c'était sur ça que vous m'avez codez..."
	elif r < 60 :
		toWrite += "Say : ... Oh, vous avez finit de dire des grossièretés, je souheterais travailler perso."
	else :
		toWrite += "Say : Je ne comprends pas ce que vous avez contre moi aujourd'hui. Je suis triste :{"	

mon_fichier.write(toWrite)

mon_fichier.close()
