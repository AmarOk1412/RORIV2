 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys
import subprocess
import os

mon_fichier = open("end", "w")
toWrite = "Say : Bonne nuit"
mon_fichier.write(toWrite)

mon_fichier.close()

subprocess.call("xset dpms force standby", shell = True)


