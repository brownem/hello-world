clear all;
clc;

syms s
G1 = (s+2)/((s+3)*(s+4));
pretty(G1)
g1=ilaplace(G1);
pretty(g1)

syms s
G3 = (100*(s + 2))/(s*(s + 1)*(s^2 + 13*s + 36));
pretty (G3)
g3=ilaplace(G3);
pretty(g3)