 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys

mon_fichier = open("end", "w")

toWrite = "Say : Ok Ajoutons ensemble le mot " + sys.argv[4] + " à ma base de données des mots"
toWrite += "\nADW : " + sys.argv[4]
toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
