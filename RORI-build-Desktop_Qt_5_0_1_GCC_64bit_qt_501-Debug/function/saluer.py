import sys
import time
import random 

mon_fichier = open("end", "w")

r = random.randint(1,4) 
r2 = random.randint(1,4)
toWrite = ""
if sys.argv[4] == "f":
	if r == 1 :
		toWrite = "Say : Salut"
	elif r == 2 and sys.argv[1] <= 50 :
		toWrite = "Say : Salutations"
	elif r == 3 and sys.argv[1] >= 50 :
		toWrite = "Say : Yo"
	else :
		if time.strftime('%H') > 17 :
			toWrite = "Say : Bonsoir"
		else :
			toWrite = "Say : Bonjour"


	if r2 == 1 :
			toWrite += " -UNAME-"
	toWrite += "\nSetst"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_P- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
	

#sys.argv[1] : RoriPolie ?
