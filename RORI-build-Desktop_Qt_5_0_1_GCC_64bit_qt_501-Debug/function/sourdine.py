 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys
import subprocess
import os

subprocess.call("pactl set-sink-volume 0 0%", shell = True)

mon_fichier = open("end", "w")
toWrite = "Say : Et voila personne ne m'entends"
mon_fichier.write(toWrite)

mon_fichier.close()
