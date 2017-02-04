#!/usr/bin/python3
# -*- coding: utf-8 -*-

#zahlen in liste - alle die nicht durch drei teilbar sind mit 10 multiplizieren

lis = [2,6,4,7,9,6,5,4,5,5,7,3,2,1,6,9,6,9]

print("list-comprehension:",[x*10 for x in lis if x%3 != 0])

print("funktionale primitive:",list(map(lambda y: y*10, filter(lambda x: x%3 != 0, lis))))

nlis = []
for e in lis:
    if e%3 != 0:
        nlis.append(e*10)

print("mit schleifen:", nlis)