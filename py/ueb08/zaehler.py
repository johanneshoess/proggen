#!/usr/bin/python3
# -*- coding: utf-8 -*-

import sys

print(sys.argv)

dic = {}
highest = 0

for e in sys.argv[1:]:
    dic[e] = dic.get(e, 0) + 1
    if dic[e] > highest:
        highest = dic[e];

lis = []
for e in dic:
    if dic[e] == highest:
        lis.append(e)

lis.sort()

for i in lis:
    print(highest, i)

#des felix lössung
# Dictionary aufbauen mit allen Wörtern und deren Häufigkeiten
words = {}
for w in sys.argv[1:]:
    words[w] = words.get(w, 0) + 1

# Alle Wörter ausgeben, die am häufigsten vorkommen
for pair in sorted([str(count) + ":" + word for word, count in words.items() if count == max(words.values())]):
    print(pair)