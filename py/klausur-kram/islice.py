#!/usr/bin/python3
# -*- coding: utf-8 -*-

def quad():
    i = 0
    while True:
        yield i
        i += 1


q = quad()

def islice(gen, fro, to, step=1):
    for x in range(fro):
        next(gen)
    while fro <to:
        yield next(gen)
        for z in range(step-1):
            next(gen)
        fro +=step

print("islice: ", list(islice(q, 3,19,3)))



class A(object):
    a = 17
    def __init__(self):
        self.a = 24
        self.b = A.a
    def change(self, zahl):
        A.a = zahl

cl = A()
print(cl.a)
print(A.a)
print(cl.b)
cl.change(42)
print(A.a)
