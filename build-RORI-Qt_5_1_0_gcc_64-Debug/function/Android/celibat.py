 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Un programme ça ne se marie pas, ça n'a pas d'enfants ni de petit(e) ami(e)...", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Pourquoi me demander des choses aussi débiles, moi je ne me marie pas, je n'aime pas, je n'enfante pas, je suis grincheuse et je ne peux même pas me déplacer jusqu'à la mairie la plus proche !", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Pourquoi c'est moi qui doit me taper les questions les plus idiotes... ", shell=True)

toWrite += "\n-R_M- : 5"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
