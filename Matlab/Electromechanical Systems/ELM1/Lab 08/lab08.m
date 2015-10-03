clear all
clc

t=0:0.01:20;
A=[0 0 1 0; 0 0 0 1; -3 2 0 0; -2 -3 0 0];
B=[0; 0; 0; 0];
C=[1 0 0 0; 0 1 0 0];
D=[0; 0];

[y,x,t]=initial(A,B,C,D,[0.01; 0; 0; 0;],t);
y1=[1 0]*y';
y2=[0 1]*y';

plot(t,y1,t,y2);
grid;
title('Response to Initial Conditions');
xlabel('t(sec)');
ylabel('y1 and y2');
text(1.6, 0.05, 'y1');
text(1.6, -0.026, 'y2');