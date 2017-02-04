#!/usr/bin/python3
# -*- coding: utf-8 -*-

x,y = 2,3

def globalVar():
    global x
    x = x*y

globalVar()
print(x,y)
