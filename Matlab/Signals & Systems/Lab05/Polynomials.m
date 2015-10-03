clc
clear all

P1 = [1, 7, -3, 23];
P2 = [5, 6, 10,];
P3 = poly([-2,-5,-6]);
%store polynomial (s+2)(s+5)(s+6) as P3 and display the coefficients

P4 = [1, 7, 20];
R4 = roots(P4)

P5 = [5, 7, 9, -3, 2];
R5 = roots(P5)

F=sym('(s^2 + 5*s + 6)*(s^2 + 7*s + 10)');
pretty(F)

v = [1, -4, 0, 2, 45];
y = poly2sym(v)
pretty(y)

syms x;
F = x^4 - 4*x^3 + 2*x + 45;
sym2poly(F)

P6 = [3, 15, 0, -10, -3, 15, -40];
P7 = [3, 0, -2, -6];
Psum = P6 + [0, 0, 0, P7]

P8 = conv([0, 1, 7, 10, 9],[1, -3, 6, 2, 1])

num1 = [2, 9, 7, -6];
den1 = [1, 3];
[a1, b1] = deconv(num1, den1)
sys1 = poly2sym(a1)
rem1 = poly2sym(b1)

num2 = [2, -13, 75, 2, -60];
den2 = [1, -5];
[a2, b2] = deconv(num2, den2)
sys2 = poly2sym(a2)
rem2 = poly2sym(b2)