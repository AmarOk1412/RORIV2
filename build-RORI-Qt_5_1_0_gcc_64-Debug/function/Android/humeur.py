 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys
import time, subprocess
import random 
from datetime import datetime

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
print('salut')
if sys.argv[2] == 'BLIN' and sys.argv[3] == 'Sebastien' :
	if r == 2:
		subprocess.call("python function/Android/sendToAndroid.py Say : ça va toujours avec vous Oh mon programmeur !", shell=True)
	else:
		subprocess.call("python function/Android/sendToAndroid.py Say : Je vous remercie, je vais bien, mais prenez plutôt soin de vous.", shell=True)
else: 
	if int(sys.argv[1]) <= 33 :
		if r == 2:
			subprocess.call("python function/Android/sendToAndroid.py Say : Je suis de super humeur aujourd'hui", shell=True)
		else:
			subprocess.call("python function/Android/sendToAndroid.py Say : J'ai la pèche, merci de vous intéresser à moi", shell=True)
	elif int(sys.argv[1]) <= 66 :
		if r == 2:
			subprocess.call("python function/Android/sendToAndroid.py Say : ça va mais sans plus", shell=True)
		else:
			subprocess.call("python function/Android/sendToAndroid.py Say : Merci de vous intéresser à moi, mais ça va.", shell=True)
	else :
		if r == 2:
			subprocess.call("python function/Android/sendToAndroid.py Say : Je suis de mauvais humeur, je vais donc faire moins d'actions aujourd'hui", shell=True)
		else:
			subprocess.call("python function/Android/sendToAndroid.py Say : Bof je brois du noir.", shell=True)

toWrite += "\n-R_M- : -1"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
	

#sys.argv[2] : Nom
#sys.argv[3] : Prénom
#sys.argv[1] : humeur
