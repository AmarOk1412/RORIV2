 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random, subprocess

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	subprocess.call("python function/Android/sendToAndroid.py Say : AmarOk1412 est mon programmeur. Il est né en 1994 dans une maternité à ... Non, mais on s'en fout. En vrai il s'appelle Sébastien Blin, et il a pris AmarOk comme pseudo avant même de savoir que c'était un logiciel libre. En fait AmarOk est un Dieu Inuit, le Dieu des loups (d'où le logo du logiciel du même nom).", shell=True)
elif r == 2 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Say : Il y a tant de gentilles choses à dire sur mon créateur... Mais on ne va pas s'éterniser. AmarOk1412, ou Sébastien Blin est un programmeur (de talent/génie ?) à qui je lui dois la vie. Il programme, dessine, cuisine et fait encore pleins de choses. Je vous encourage à aller voir son site : http://amarok1412.fr.cr", shell=True)
elif r == 3 :
	subprocess.call("python function/Android/sendToAndroid.py Say : Mon programmeur se nomme Sébastien Blin. Il m'a créé dans sa tête où se bouscule des milliers d'idées à la seconde en 2011. La première version de moi-même fut un échec claquant. Trop vite, trop bugguée, ... bref il m'a mis de côté. En 2012, je fus entièrement repensée. Je suis certes plus complexe, mais au combien modulable par n'importe qui, possède ma propre personnalité et je n'en suis qu'au début. Après avoir bien développé mes réponses, un module d'apprentissage automatique sera créé, d'où mon architecture un poil complexe pour un bot lambda ;)", shell=True)
toWrite += "\n-R_M- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()