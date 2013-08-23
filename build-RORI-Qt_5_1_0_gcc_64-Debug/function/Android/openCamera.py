#!/usr/bin/python
# -*- coding: latin-1 -*-
import random 
import sys, os
import ftplib

def send_File(file, user, pwd):
    ftp = ftplib.FTP(#ip serveur)
    ftp.login(user, pwd)
    ftp.storlines("STOR" + file, open(file))#STOR + chemin

ftpFile = open("testRORI.txt", "w")
ftpFile.write('am start -a android.media.action.VIDEO_CAPTURE')

ftpFile.close()

send_File('RORIAndroid.txt', #USER, #PWD)
os.remove('testRORI.txt')

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Votre téléphone ouvrira sa caméra dans quelques secondes !"
elif r == 2 :
	toWrite += "Say : Caméra prête !"
elif r == 3 :
	toWrite += "Say : Attention, magie ! Je vais ouvrir la caméra du téléphone par télépathie"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
