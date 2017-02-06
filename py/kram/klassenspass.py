#!/usr/bin/python3
# -*- coding: utf-8 -*-

class obere(object):
    a = 15
    def __init__(self):
        self.zahl = 42

    def fun(self):
        return 17

class untere(obere):
    def __init__(self):
        self.nummer = 21

    def fun(self):
        return super().fun()

u = untere()
print("hier die zahl:",u.fun())
print("klassenparameter", u.a)
