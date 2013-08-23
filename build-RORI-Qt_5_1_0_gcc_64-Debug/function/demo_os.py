 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys

mon_fichier = open("end", "w")

toWrite = "Say : Je ne suis disponible que sous Linux et surement un jour sous Android. Aucune version n'est prévu sous Windaube... euh non windows sauf si un programmeur motivé réalise une version win. Toi tu ne le feras pas vu que tu es un libriste."

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
