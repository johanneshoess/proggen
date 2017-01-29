#!/usr/bin/python3
# -*- coding: utf-8 -*-

def anz_bestanden(filename):
    test = open(filename,"r")
    bestanden = []
    for line in test:
        line.strip("\n")
        points = line.split()
        if len(points) >= 4:
            if (int(points[1]) + int(points[2]) + int(points[3])) > 6:
                bestanden.append(points[0])
    return len(bestanden)

print("bestanden haben:", anz_bestanden("punkte1.txt"))

def anz_nullpunkte(filename):
    test = open(filename, "r")
    nullpunkte = []
    for line in test:
        line.strip("\n")
        points = line.split()
        if len(points) >= 4:
            if (int(points[1]) + int(points[2]) + int(points[3])) < 1:
                nullpunkte.append(points[0])
    return len(nullpunkte)

print("Null Punkte haben:", anz_nullpunkte("punkte1.txt"))