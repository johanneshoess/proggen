#!/usr/bin/python3
# -*- coding: utf-8 -*-

def prim():
    n = 2
    p = []
    yield 2
    p.append(2)
    while True:
        isPrim = True
        n += 1
        for e in p:
            if n%e == 0:
                isPrim = False
                break
        if isPrim:
            p.append(n)
            yield n

def primPaare():
    p = prim()
    last = 3
    while True:
        primz = next(p)
        if (primz - last) == 2:
            yield last, primz
        last = primz

pp = primPaare()

for e in range(101):
    print(next(pp))