 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys

mon_fichier = open("end", "w")
mon_fichier2 = open("socket", "w")

i = 2
search = ""
while i < len(sys.argv):
	if sys.argv[i] != "google" and sys.argv[i] != "moi" and sys.argv[i] != "sur" and sys.argv[i] != "la" and sys.argv[i] != "le":
		search += sys.argv[i] + ' '
	i += 1

toWrite2 = "--SCH--" + search

toWrite = "-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier2.write(toWrite2)
mon_fichier.write(toWrite)
mon_fichier.close()
mon_fichier2.close()												