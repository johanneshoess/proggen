#!/usr/bin/python3
# -*- coding: utf-8 -*-

class Set():
    def __init__(self, params):
        self.set = []
        self.union_update(params)

    def union_update(self, seq):
        if seq == None:
            self.set = []
        else:
            for e in seq:
                if e not in self.set:
                    self.set.append(e)
            self.set.sort()

    def union(self, seq):
        ret = Set(self.set)
        return ret.union_update(seq)

    def add(self, ele):
        if ele not in self.set:
            self.set.append(ele)
            self.set.sort()


    def remove(self, p):
        self.set.remove(p)

    def difference_update(self, seq):
        for e in seq:
            if e in self.set:
                self.set.remove(e)

    def difference(self, seq):
        ret = Set(self.set)
        return ret.difference_update(seq)

    def clear(self):
        self.set = []

    def size(self):
        return len(self.set)

    def __len__(self):
        return self.size()

    def __iter__(self):
        self.index = 0
        return self

    def __next__(self):
        if self.index >= len(self.set):
            raise StopIteration
        self.index += 1
        return self.set[self.index-1]

    def sort(self):
        self.set.sort()

    def __eq__(self, other):
        if type(other) == type(self):
            self.set.sort() == other.set.sort()
        else:
            False

    def __ne__(self, other):
        return self.set != other

    def __repr__(self):
        str = "set("+self.set.__str__()+")"
        return str

    def __str__(self):
        return self.__repr__()

    def __add__(self, other):
        self.union_update(other)

    def __sub__(self, other):
        self.difference_update(other)
