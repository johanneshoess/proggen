#!/usr/bin/python3
# -*- coding: utf-8 -*-

x = 17

class iwas(object):
    def __init__(self):
        self.x = 34

    def getIt(self):
        return 34

def immer(k):
    x = 0
    global x
    x = x+1
    return x

i = iwas()

print(immer(3))
print(i.getIt())

#class iwwass()