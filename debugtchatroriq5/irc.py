#!/usr/bin/env python2
# -*- coding: utf8 -*-
 
import irclib
import ircbot
import threading
import time
import os, sys

print sys.argv[2]
print sys.argv[1]
 
channel = '#' + sys.argv[2]

class MyTimer:
    def __init__(self, tempo, target, args= [], kwargs={}):
        self._target = target
        self._tempo = tempo

    def _run(self):
        self._timer = threading.Timer(self._tempo, self._run)
        self._timer.start()
        self._target()
        
    def start(self):
        self._timer = threading.Timer(self._tempo, self._run)
        self._timer.start()

    def stop(self):
        self._timer.cancel()


class RORI(ircbot.SingleServerIRCBot):
    def __init__(self):
        ircbot.SingleServerIRCBot.__init__(self, [(sys.argv[1], 6667)],
                                           "botroritedsqsqfw", "RORI programm")
	self.timer = MyTimer(1.0, self.readFile)
	self.timer.start()
 
    def on_welcome(self, serv, ev):
	self.serveur = serv
        serv.join(channel)
        serv.privmsg(channel, 'Bonjour tout le monde')
 
    def on_pubmsg(self, serv, ev):
        # Il n'est pas indispensable de passer par des variables
        # Ici elles permettent de clarifier le tout.
        auteur = irclib.nm_to_n(ev.source())
        canal = ev.target()
        message = ev.arguments()[0] #message
	fileIRC = open('historyIRC', 'w')
        fileIRC.write(auteur + ' : ' + message)
        fileIRC.close()
	while not os.path.exists('toSayIRC'):
		print 'wait'
	fileToSay = open('toSayIRC', 'r')
        toSay = fileToSay.read()
 	fileToSay.close()
	if toSay != '--nothingToSay--':
	     serv.privmsg(channel, toSay)
	os.remove('toSayIRC')

    def readFile(self):
        if os.path.exists('toSayIRC'):
	    fileToSay = open('toSayIRC', 'r')
            toSay = fileToSay.read()
 	    fileToSay.close()
        
 
if __name__ == "__main__":
    RORI().start()