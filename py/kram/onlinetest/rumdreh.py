#!/usr/bin/python3
# -*- coding: utf-8 -*-

zk = "ich bin ein String"

def rumdreh(zk):
    w = ""
    t = zk[:]
    for x in t:
        w = w + zk[-1]
        zk = zk[:-1]
    return w

print("rumdreh:",rumdreh(zk))

def vokale(zk):
    v = ""
    k = ""
    for e in zk:
        if e in "aeiou":
            v = v + e
        else:
            k = k + e
    return v,k

print("vokale:", vokale(zk))

zk = "{me} bin ein {str}"
dic = {"me": "ICH", "str":"STRING"}

def ersetze(zk, dic): # mit replace gehts besser
    temp = ""
    on = False
    ret = ""
    for e in zk:
        if not on and e == "{":
            on = True
            continue
        if on and e == "}":
            on = False
            ret = ret + dic[temp]
            temp = ""
            continue
        if not on:
            ret = ret + e
        if on:
            temp = temp + e
    return ret

print("ersetze:", ersetze(zk, dic))