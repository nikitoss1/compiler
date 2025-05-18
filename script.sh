#!/bin/bash
bison -y -d prs.y -Wnone --verbose -Wcounterexamples
flex --nowarn lx.l
g++ -o parser y.tab.c lex.yy.c -I.
./myparser tst.dart