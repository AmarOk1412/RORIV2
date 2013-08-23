 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess
import sys
import os 

mon_fichier = open("end", "w")

r = int(sys.argv[1])
toWrite = ""
if r < 25 :
	subprocess.call("python function/Android/sendToAndroid.py Say : ... Je vous prie de me parler mieux. Ce n'est pas en m'insultant que je vais faire ce que vous me demandez. Si vous êtes pas content vous me fermer et puis c'est tout.", shell=True)
	toWrite += "\n-R_H- : 10"
	toWrite += "\n-R_P- : 10"
	toWrite += "\n-U_BU- : 10"
elif r < 60 :
	subprocess.call("python function/Android/sendToAndroid.py Say : ... Je me permet de rigoler. Vous avez oublié que c'est moi qui contrôle le systeme. Petit exemple (Je peux être méchante)", shell=True)
	toWrite += "\n-R_H- : 10"
	toWrite += "\n-R_H- : 20"
	toWrite += "\n-U_BU- : 20"
	i = 0
	while i < 10 :
	    os.system("nautilus")
	    i += 1
else :
	subprocess.call("python function/Android/sendToAndroid.py Say : Ok ... Goûtez ma puipuipuissance !!", shell=True)
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
