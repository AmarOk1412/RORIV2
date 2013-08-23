 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys
import time
import random 
from datetime import datetime


mon_fichier = open("end", "w")

r = random.randint(1,4) 
r2 = random.randint(1,4)
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : A la prochaine", shell=True)
elif r == 2 and sys.argv[1] <= 50 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Ravie de vous avoir parlé", shell=True)
elif r == 3 and sys.argv[1] >= 50 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Tchuss", shell=True)
else :
	subprocess.call("python function/Android/sendToAndroid.py Say : Au revoir", shell=True)

toWrite += "\n-R_M- : -20"
toWrite += "\n-U_P- : -30"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
	

#sys.argv[1] : Nom
#sys.argv[2] : Prénom
#sys.argv[3] : saluer ?
