 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys
import math, random, os, sys, subprocess, re

def listdirectory(path): 
    fichier=[] 
    for root, dirs, files in os.walk(path): 
        for i in files: 
            fichier.append(os.path.join(root, i)) 
    return fichier

fichiers = listdirectory('/home')
for f in fichiers:
    m = re.search(sys.argv[len(sys.argv) - 1] + '.{0,10}(pn|jp)g', f)
    if m is not None:
        subprocess.call('shotwell ' + f, shell=True)

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : J'espère que vous avez trouvé une belle photo ;)"
elif r == 2 :
	toWrite += "Say : J'espère avoir répondu à votre attente ;)"
elif r == 3 :
	toWrite += "Say : Et voilà."

toWrite += "\n-R_M- : 10"
toWrite += "\n-U_BU- : 10"

mon_fichier.write(toWrite)

mon_fichier.close()
