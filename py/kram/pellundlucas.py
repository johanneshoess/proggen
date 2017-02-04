# !/usr/bin/python3
# -*- coding: utf-8 -*-

def lucasfolge():
    i = 0
    while True:
        if i==0:
            old = 2
            yield 2
        elif i == 1:
            new = 1
            yield 1
        else:
            sum = old+new
            yield sum
            old = new
            new = sum
        i += 1

def pellfolge():
    i = 0
    while True:
        if i == 0:
            old = 0
            yield 0
        elif i == 1:
            new = 1
            yield 1
        else:
            sum = new*2+old
            yield sum
            old = new
            new = sum
        i += 1

def meinePellfolge():
    last = [0,1]
    yield 0
    yield 1
    while True:
        x = 2* last[1] + last[0]
        yield x
        last = last[1:]
        last.append(x)

def flatten(seq):
    newList = []
    for s in seq:
        if type(s) is not list:
            newList.append(s)
        else:
            newList.extend(flatten(s))
    return newList



#l = lucasfolge()
#p = pellfolge()

#for i in range(20):
#    print(next(p))

li = [1,2,3,[4,5,[6,7],8,9]]
print(flatten(li))