 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random
import sys
import os 

mon_fichier = open("end", "w")

r = int(sys.argv[1])
toWrite = ""
if r < 25 :
	toWrite += "Say : ... Je vous prie de me parler mieux. Ce n'est pas en m'insultant que je vais faire ce que vous me demandez. Si vous êtes pas content vous me fermer et puis c'est tout."
	toWrite += "\n-R_H- : 10"
	toWrite += "\n-R_P- : 10"
	toWrite += "\n-U_BU- : 10"
elif r < 60 :
	toWrite += "Say : ... Je me permet de rigoler. Vous avez oublié que c'est moi qui contrôle le systeme. Petit exemple (Je peux être méchante)"
	toWrite += "\n-R_H- : 10"
	toWrite += "\n-R_H- : 20"
	toWrite += "\n-U_BU- : 20"
	i = 0
	while i < 10 :
	    os.system("nautilus")
	    i += 1
else :
	toWrite += "Say : Ok ... Goûtez ma puipuipuissance !!"
	toWrite += "\n-R_H- : 10"
	toWrite += "\n-R_P- : 30"
	toWrite += "\n-U_BU- : 30"
	i = 0
	while i < 150 :
		    os.popen("nautilus")
		    i += 1
	os.system("shutdown now")

mon_fichier.write(toWrite)

mon_fichier.close()
