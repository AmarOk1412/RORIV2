#!/usr/bin/python
# -*- coding: latin-1 -*-
import random 
import sys, os
import ftplib

def send_File(file, user, pwd):
    ftp = ftplib.FTP("#ip serveur")
    ftp.login(user, pwd)
    ftp.storlines("STOR chemin" + file, open(file))

ftpFile = open("RORIAndroid.txt", "w")

ftpFile.write('NUM : ' + str(random.randint(0, 1000)) + "\n")
i = 1
while i < len(sys.argv):
    ftpFile.write(sys.argv[i] + ' ')
    i += 1

ftpFile.close()

send_File('RORIAndroid.txt', #USER, #PWD)
os.remove('RORIAndroid.txt')

