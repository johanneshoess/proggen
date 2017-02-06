name = include

$(name): $(name).c zusatz.o zweiter.o
    gcc -std=c99 -g -Wall - pedantic -Wvla $(name).o - o $(name) zusatz.o zweiter.o