 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je dirais 42. Mais vous devrez trouver la question seul. Contrairement à ma collègue Comput 1, moi j'ai la flemme de refaire un ordinateur. Bonne chance...", shell=True)
elif r == 2 :
        subprocess.call("python function/Android/sendToAndroid.py Say : 42 est bien sur la réponse à cette profonde question (ironie)", shell=True)
elif r == 3 :
        subprocess.call("python function/Android/sendToAndroid.py Say : quarante-deux !", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()

