 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys
mon_fichier = open("up.inf", "r")


liste = ["m'appelle", "m'apelle", "m'appele", "m'apele", "appelle", "apelle", "appele", "apele", "nomme", "prenomme", "prénomme", "suis"]
i = 0
while not sys.argv[i] in liste:
    i+=1

j=0
toWrite = ''
while j < 8:
    toWrite += mon_fichier.readline()
    j += 1
toWrite += sys.argv[i + 1] + '\n' + sys.argv[i + 2]
mon_fichier.close()


mon_fichier = open("up.inf", "w")
mon_fichier.write(toWrite)
mon_fichier.close()

mon_fichier = open("end", "w")

toWrite = "Say : Ravi de te connaitre " + sys.argv[i + 1] + ' ' + sys.argv[i + 2]
toWrite += "\nADF"
toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
