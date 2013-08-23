 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite = "Say : Je ne suis pas un être vivant, je ne rêve donc jamais. Si je ne suis pas alimentée, je reste chez moi, sinon je vous parle"
elif r == 2 :
	toWrite = "Say : Non, moi j'aime le concret"
elif r == 3 :
	toWrite = "Say : Un programme ça ne rêve pas, ça travaille."

toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
