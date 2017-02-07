def zaehler(seq, max):
    for e in seq:
        if type(e) == type([]) or type(e) == type((1,)):
            if len(e)>max:
                max = len(e)
            max = zaehler(e, max)
    return max

def fill(seq, max):
    new = []
    for e in seq:
        if type(e) == type([]) or type(e) == type((1,)):
            new.append(fill(e,max))
        else:
            new.append(e)
    if len(new) < max:
        for x in range(max-len(new)):
            new.append(None)

    if type(seq) == type((1,)):
        return tuple(new)
    return new



def aufbleah(seq):
    max = zaehler(seq, 0)
    return fill(seq, max)

def umdreh(seq):
    new = []
    for e in seq:
        if type(e) == type([]):
            new.append(tuple(umdreh(e)))
        elif type(e) == type((1,)):
            new.append(list(umdreh(e)))
        else:
            new.append(e)
    if type(seq) == type((1,)):
        return list(new)
    elif type(seq) == type([]):
        return tuple(new)

s = [[(23,5,6,78,9,"was auch immer"),3,4,5,5,6,5],[1,[3,4,5,[6,5,4,3]]],(2,4,5),4,3]
klein = [2,3,5,(54,6,5,6,7,8,9,0,2,3),[3,2,4,(3,4,5,7,8,[3,4,5])]]
print("vorher", klein)
print("aufblaeh", aufbleah(klein))
#print("umdreh", umdreh(klein))