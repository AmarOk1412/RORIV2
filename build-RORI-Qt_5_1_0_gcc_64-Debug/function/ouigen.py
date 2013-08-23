 #!/usr/bin/python
# -*- coding: latin-1 -*-
import sys
import subprocess
mon_fichier = open("end", "w")
toWrite = "ResNFA\n"
toWrite += "ENLA-|-xxxxxxxxxx0-|-Puis-je ranger votre chambre ?3-|-42.py\n"
toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"
mon_fichier.write(toWrite)

mon_fichier.close()
subprocess.call("python function/42.py", shell = True)