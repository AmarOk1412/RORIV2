 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Say : Non. C'est chiant, ça tape n'importe comment sur le clavier, ça bave sur les circuits imprimés, ça fout les doigts dans les prises. C'est casse-tete...", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Non, sauf s'il est un dérivé de moi-même.", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
