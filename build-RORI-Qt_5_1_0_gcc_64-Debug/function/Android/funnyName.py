 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
subprocess.call("python function/Android/sendToAndroid.py Say : Mouai, on doit pas avoir le même humour.", shell=True)

toWrite += "\n-R_M- : 10"
toWrite += "\n-R_J- : 10"
toWrite += "\n-U_J- : -10"
toWrite += "\n-U_C- : 10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
