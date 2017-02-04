#!/usr/bin/python3
# -*- coding: utf-8 -*-

def flatten(seq):
    lis = []

    for e in seq:
        if type(e) == type(tuple()) or type(e) == type([]):
            lis += flatten(e) #extend
        else:
            lis.append(e)
    return lis

seq = [1, 2, 3, [4, 5, [6, 7], 8, 9], "apfel",(3,4,5)]

print("flatten", flatten(seq))


def deepcopy(seq):
    l = []
    isTupel = True
    if type(seq) == type([]):
        isTupel = False

    for e in seq:
        if type(e) == type([]) or type(e) == type((1,)):
            l.append(deepcopy(e))
        else:
            l.append(e)
    if isTupel:
        return tuple(l)
    return l

str = deepcopy(seq)
print("deepcopy", str)
str[3][2][1] = "jupdidudeldu!"
print("change", str)
print("original", seq)
