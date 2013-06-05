import subprocess
import os
import sys

toSay = ""
i = 1

while i < len(sys.argv) :
	toSay = toSay + ' ' + str(sys.argv[i])
	i = i + 1

#subprocess.call('espeak -vzh+f3 -p 60 -s 150 -m  "' + toSay + '"', shell=True)
subprocess.call('espeak -vfr+f3 -p 60 -s 150 -m  "' + toSay + '"', shell=True)
