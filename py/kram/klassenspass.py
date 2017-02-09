#!/usr/bin/python3
# -*- coding: utf-8 -*-

class obere(object):
    a = 15
    def __init__(self):
        self.zahl = 42
        self.a = 4

    def fun(self):
        return 17
    def show(self):
        print(self.a)
    def delete(self):
        del self.a
    def arit(self):
        self.a = self.a +4

class untere(obere):
    def __init__(self):
        self.nummer = 21

    def fun(self):
        return super().fun()



o = obere()
o.show()
o.delete()
o.show()
o.arit()
o.show()