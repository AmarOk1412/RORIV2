 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys
import time
import random 
from datetime import datetime

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
print('salut')
if sys.argv[2] == 'BLIN' and sys.argv[3] == 'Sebastien' :
	if r == 2:
		toWrite = "Say : ça va toujours avec vous Oh mon programmeur !"
	else:
		toWrite = "Say : Je vous remercie, je vais bien, mais prenez plutôt soin de vous."
else: 
	if int(sys.argv[1]) <= 33 :
		if r == 2:
			toWrite = "Say : Je suis de super humeur aujourd'hui"
		else:
			toWrite = "Say : J'ai la pèche, merci de vous intéresser à moi"
	elif int(sys.argv[1]) <= 66 :
		if r == 2:
			toWrite = "Say : ça va mais sans plus"
		else:
			toWrite = "Say : Merci de vous intéresser à moi, mais ça va."
	else :
		if r == 2:
			toWrite = "Say : Je suis de mauvais humeur, je vais donc faire moins d'actions aujourd'hui"
		else:
			toWrite = "Say : Bof je brois du noir."

toWrite += "\n-R_M- : -1"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
	

#sys.argv[2] : Nom
#sys.argv[3] : Prénom
#sys.argv[1] : humeur
