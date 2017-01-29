#!/usr/bin/python3
# -*- coding: utf-8 -*-

lis = [1,2,3]

i = len(lis)
while i>0:
    print(lis[i-1])
    i -= 1

dic = {1: "eins", 2: "zwei", 3:"drei"}

for k in dic.keys():
    print(k, dic[k])