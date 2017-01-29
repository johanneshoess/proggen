#!/usr/bin/python3
# -*- coding: utf-8 -*-

# größter gemeinsamer Teiler

def ggt(x, y):
    if x > y:
        return ggt(x-y, y)
    elif x == y:
        return x
    else:
        return ggt(y, x)



def ggt(x,y):
    while x != y:
        if x > y or x%y != 0:
            x % y
            tmp = x
            x = y
            y = tmp
            print(x, y)

    return x

#print("(10, 30)", ggt(10, 30))
print("(20, 30)", ggt(20, 30))
print("(2, 5)", ggt(2, 5))
print("(8, 6)", ggt(8, 6))
print("(7, 3)", ggt(7, 3))