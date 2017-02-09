#!/usr/bin/python3
# -*- coding: utf-8 -*-

class lone(object):
    def __init__(self, number):
        self._number = number
        self._x = 17
        self._a = 0;

    @property
    def number(self):
        return self._number

    @number.setter
    def number(self, number):
        if number <0:
            self._number = 0
        else:
            self._number = number

l = lone(44)
print(l.number)
l.number = -23
print(l.number)
l.number = 24
print(l.number)

class P(object):

    def __init__(self,x):
        self.x = x

    @property
    def x(self):
        return self.__x

    @x.setter
    def x(self, x):
        if x < 0:
            self.__x = 0
        elif x > 1000:
            self.__x = 1000
        else:
            self.__x = x

p = P(42)
print(p.x)
p.x = -34
print(p.x)
p.x = 1099
print(p.x)
