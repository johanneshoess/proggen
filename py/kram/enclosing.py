#!/usr/bin/python3
# -*- coding: utf-8 -*-

def enclosing(s):
    def enclosed(s):
        def enclosedter(s):
            print("ich komm hier nicht raus!", s)
            if s != "jo":
                enclosing("jo")
        enclosedter(s)
    enclosed(s)
enclosing("na")