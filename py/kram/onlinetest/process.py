#!/usr/bin/python3
# -*- coding: utf-8 -*-

lines = open("lines.txt", "r")

def process(lines, split=":", key=0, del_key=False):
    dic = {}
    for l in lines:
        words = l.strip("\n").split(split)
        k = words[key]
        if del_key:
            del words[key]
        dic[k] = words
    return dic

print(process(lines))