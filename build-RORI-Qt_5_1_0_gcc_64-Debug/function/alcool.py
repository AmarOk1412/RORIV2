 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite = "Say : Oula non... vous voulez que mes circuits grillent c'est ça ? Je suis un ordinateur moi !"
elif r == 2 :
	toWrite = "Say : Eum ... je préfère éviter, pour moi c'est un peu me demandez : Tu veux t'électrocuter ? "
elif r == 3 :
	toWrite = "Say : Je ne bois pas, même s'il paraît que c'est pas mal, mais l'abus d'alcool est dangereux pour la santé (je sais que si je bois un verre, je risque de mourrir grillé)."

toWrite += "\n-R_M- : 10"
toWrite += "\n-R_P- : 5"
toWrite += "\n-U_J- : -10"
toWrite += "\n-U_BU- : 15"

mon_fichier.write(toWrite)

mon_fichier.close()
