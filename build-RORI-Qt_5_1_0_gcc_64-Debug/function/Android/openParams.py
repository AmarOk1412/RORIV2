#!/usr/bin/python
# -*- coding: latin-1 -*-
import random 
import sys, os
import ftplib

def send_File(file, user, pwd):
    ftp = ftplib.FTP(#ip serveur)
    ftp.login(user, pwd)
    ftp.storlines("STOR " + file, open(file))#STOR + chemin

ftpFile = open("RORIAndroid.txt", "w")
ftpFile.write("NUM : " + str(random.randint(0,1000)) + "\nSay : Voilà les paramètres\nam start -a android.intent.action.MAIN -n com.android.settings/.Settings")

ftpFile.close()

send_File('RORIAndroid.txt', #USER, #PWD)
os.remove('RORIAndroid.txt')
