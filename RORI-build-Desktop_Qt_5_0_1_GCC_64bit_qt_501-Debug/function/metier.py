 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 

mon_fichier = open("end", "w")

r = random.randint(1,2) 
toWrite = ""
if r == 1 :
	toWrite = "Say : Je ne suis pas un simple homo sapiens sapiens, je suis RORI... je n'ai pas à travailler vraiment comme vous, moi je vous aide quand je le veux, c'est tout."
elif r == 2 :
	toWrite = "Say : On ne peut pas dire que j'ai un métier, si vous ne l'aviez pas remarqué je ne suis qu'un simple programme dans votre ordinateur..."

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
