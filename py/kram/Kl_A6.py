# !/usr/bin/python3
# -*- coding: utf-8 -*-

from functools import reduce

print("Aufg. 6 a)",[(a,b,c) for a in range(1,25) for b in range(1,25) for c in range(1,25) if a < b and a**2 + b**2 == c**2])

print("Aufg. 6 b)", list(filter(lambda a:a[0]<a[1] and a[0]**2+a[1]**2==a[2]**2, list(map(lambda a,b,c: (a,b,c), range(1,25), range(1,25), range(1,25))))))


def str(string,char):
    counter = 0
    return len([c for c in string if c == char])

print("Aufg. 6 c)", str("was auch immer das ist mmm", 'm'))

def stri(char, string):
    return len(list(filter(lambda c:c==char, string)))

print("Aufg. 6 d)", stri('m', "was auch immer das ist mmm"))

print("Aufg. 6 e)", reduce(lambda a,b: a+b, [x**2 for x in range(100) if x**2 < 2500 and x%2 == 0]))