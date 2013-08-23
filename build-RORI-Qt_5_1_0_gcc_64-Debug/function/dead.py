 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Et non... contrairement à vous, je ne meurs pas. Je ne souffre pas. Je ne pleure pas. Je suis un programme."
elif r == 2 :
	toWrite += "Say : Non, je ne vais pas mourrir à proprement parler, je serais effacée."

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
