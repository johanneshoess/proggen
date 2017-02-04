#!/usr/bin/python3
# -*- coding: utf-8 -*-

print("geradzahlige kubik in range(1,11)\t- ",[x**3 for x in range(1,11) if x%2 == 0])

print("alle teiler von z außer 1 und z\t- ",[[z for z in range(2,x) if x%z ==0] for x in [123, 12345, 123456]])

print("alle Primzahlen zwischen 10000 und 10100", [x for x in range(10000, 10100) if [c for c in range(2,x) if x%c == 0] == []])

trans = {'2':'zwei', '3':'drei', '4':'vier'}
s = """2 sachen
        und 3 sachen
        sind nicht 4 sachen"""

print("ersetze alle zahlen durch wörter wenn sie im Dictonery sind:", " ".join([trans[k] if k in trans else k for k in s.split()]))

#gibt generator statt liste
g = (x*x for x in range(9))
lg = list(g)

print(lg)

import sys

sys.argv

