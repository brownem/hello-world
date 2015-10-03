%% set up
clear all
close all
clc

%% Gain
pos=0.3;
z=((-log(pos))/(sqrt((pi^2) + (-log(pos))^2)));
k1=122;
k2=4.65;
pdom= -2.3159 + 2.3286i;
pdes=2*pdom;
ades=angle((pdes+6)/((pdes+2)*(pdes+3)*(pdes+5)))*(180/pi);

zc=(4.6318-4.6572)/(tan(ades*(pi/180)));
k3=1/abs(((pdes + zc)*(pdes+6))/((pdes+2)*(pdes+3)*(pdes+5)));

%% System
G1=zpk([-0.1],[0 -1 -3 -10],1);
T1=feedback(G1*k1,1);

G2=zpk([-6],[-2 -3 -5],1);
T2=feedback(G2*k2,1);

G3=zpk([-zc -6],[-2 -3 -5],1)
T3=feedback(k3*G3,1)

%% Step
figure
step(T1)

figure
step(T3)

figure
step(T2,'r',T3,'b')
legend('Original','PD Compensated')