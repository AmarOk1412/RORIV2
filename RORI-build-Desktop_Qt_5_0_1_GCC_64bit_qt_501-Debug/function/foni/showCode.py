 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys

mon_fichier = open("end", "w")
mon_fichier2 = open("socket", "w")

toWrite2 = "--SHC--"

toWrite = "Say : C'est bien, vous êtes curieux !\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -20"
toWrite += "\n-U_BU- : -10"

mon_fichier2.write(toWrite2)
mon_fichier.write(toWrite)
mon_fichier.close()
mon_fichier2.close()
