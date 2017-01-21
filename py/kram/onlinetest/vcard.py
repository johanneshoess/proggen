#!/usr/bin/python3
# -*- coding: utf-8 -*-

file = open("vcards.txt", "r")


dic = {}
lis = []

def dicGehRein(d, dTmp):
    if list(d.keys())[0] == "__":
        dTmp["__"] = d["__"]
    else:
        key = list(d.keys())[0]
        if key in dTmp:
            dicGehRein(d[key], dTmp[key])
        else:
            dTmp[key] = d[key]
            dicGehRein(d[key], dTmp)

def doDict(a):
    if len(a[0].split(":")) > 1:
        d = {}
        b = a[0].split(":")
        l = [b[1]]
        for c in a[1:]:
            l.append(c)
        d[b[0]] = {"__":l}
        return d
    d = {}
    d[a[0]] = doDict(a[1:])
    return d

for line in file:
    s = line.split(":")
    if s[0] == "BEGIN" or s[0] == "END":
        pass
    else:
        d = doDict(line.split(";"))
        print(d)
        dicGehRein(d, dic)


print(dic)


