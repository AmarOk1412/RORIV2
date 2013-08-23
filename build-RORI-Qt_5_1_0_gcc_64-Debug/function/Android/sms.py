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

print(params)
#regex for phone number
r = re.compile(r'dis|Dis.(.{0,10000})au.(\d{3}[-\.\s]??\d{3}[-\.\s]??\d{4}|\(\d{3}\)\s*\d{3}[-\.\s]??\d{4}|\d{3}[-\.\s]??\d{4})')
results = r.findall(params)
#results[0]: mes, results[1]: sms

print('ok' + results[0] + '---' + results[1])

def send_File(file, user, pwd):
    ftp = ftplib.FTP(#ip serveur)
    ftp.login(user, pwd)
    ftp.storlines("STOR " + file, open(file))#STOR +chemin

ftpFile = open("RORIAndroid.txt", "w")
ftpFile.write("NUM : " + str(random.randint(0,1000)) + "\nSay : Bien entendu, envoyons ce SMS\nadb shell am start -a android.intent.action.SENDTO -d sms:"+ results[1] + " --es sms_body \""+ results[0] +"\" --ez exit_on_sent true\nadb shell input keyevent 22\nadb shell input keyevent 66")

ftpFile.close()

send_File('RORIAndroid.txt', #USER, #PWD)
os.remove('RORIAndroid.txt')

