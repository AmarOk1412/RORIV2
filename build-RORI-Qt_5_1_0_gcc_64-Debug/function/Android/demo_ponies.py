 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys, subprocess

mon_fichier = open("end", "w")

subprocess.call("python function/Android/sendToAndroid.py Say : Pourquoi je me tape toujours des questions aussi connes pour des tests ! Merde ! Dis un truc d'intelligent la tu fais une vidéo sale ******* !", shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
