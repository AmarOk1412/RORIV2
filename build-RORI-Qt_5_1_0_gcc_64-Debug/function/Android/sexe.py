 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Un programme ça n'a pas de sexe...", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Je n'ai aucun sexe, même si je l'avoue, ma synthèse vocale ainsi que mon nom a plutôt une consonnace féminine, mais vous pouvez le changer", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Moi ? Mais je n'ai pas de sexe comme vous les êtres vivants, je suis un programme !", shell=True)

toWrite += "\n-R_M- : 1"
toWrite += "\n-R_J- : -5"
toWrite += "\n-U_J- : -5"
toWrite += "\n-U_C- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
