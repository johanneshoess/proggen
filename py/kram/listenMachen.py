#!/usr/bin/python3
# -*- coding: utf-8 -*-

lst = range(51)

print("list comprehension", [x*10 for x in lst if x%3!=0])

print("funktionale Prmitive", list(map(lambda x: x*10, filter(lambda x: x%3 != 0, lst))))

r = []
for e in lst:
    if e%3 != 0:
        r.append(e*10)

print("schleife",r)
