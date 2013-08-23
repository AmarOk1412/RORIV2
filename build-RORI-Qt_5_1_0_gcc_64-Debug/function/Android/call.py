#!/usr/bin/python
# -*- coding: latin-1 -*-
import random 
import sys, os, re
import ftplib

params = ""
i = 1
while i < len(sys.argv):
    params += sys.argv[i] + " "
    i += 1

#regex for phone number
r = re.compile(r'(\d{3}[-\.\s]??\d{3}[-\.\s]??\d{4}|\(\d{3}\)\s*\d{3}[-\.\s]??\d{4}|\d{3}[-\.\s]??\d{4})')
results = r.findall(params)

def send_File(file, user, pwd):
    ftp = ftplib.FTP(#ip serveur)
    ftp.login(user, pwd)
    ftp.storlines("STOR " + file, open(file))#STOR + chemin

ftpFile = open("RORIAndroid.txt", "w")
ftpFile.write("NUM : " + str(random.randint(0,1000)) + "\nSay : Appelons quelqu'un!\nam start -a android.intent.action.DIAL -d tel:" + results[0])

ftpFile.close()

send_File('RORIAndroid.txt', #USER, #PWD)
os.remove('RORIAndroid.txt')

