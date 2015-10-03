%% Maintenance
clear all
close all
clc

syms n x z s


%% Original Systems, Inputs, and Sampling
Fs1=300;                                        %Sample Frequency 1
Fs2=1000;                                       %Sample Frequency 2
Fs3=100;                                        %Sample Frequence 3
%Yn1=0.5*x(n) + 0.5x(n-1);                      %System EQ Y2(n)
b1=[0.5 0.5];                                   %System 1 Coefficients
%Yn2=0.5*n(n) - 0.5x(n-1);                      %System EQ Y2(n)
b2=[0.5 -0.5];                                  %System 2 Coefficients
%Yn3=(1/4)*(x(n) + x(n-1) + x(n-2) + x(n-3))    %System EQ Y3(n)
b3=[1/4 1/4 1/4 1/4];                           %System 3 Coefficients


%% Frequency Responses
figure
freqz(b1,1,256,Fs1)          %Frequency Response of System 1
title('Low Pass')

figure
freqz(b2,1,256,Fs1)          %Frequency Response of System 2
title('High Pass')

figure
freqz(b3,1,256,Fs2)          %Frequency Response of System 3
title('Band Pass')

%% SP Tool
sptool
a=[1 0 0 0];


%% Spectrums
n=0:999;
x1=8*cos(2*pi*250*n*(1/Fs2) + (pi/3));
x2=8*cos(2*pi*250*n*(1/Fs3) + (pi/3));


%% FDA Tool
fdatool


%% Chirp
f1=200;
f2=2200;
T=10;
fs=8000;
t=0:(1/fs):T;
y=chirp(t,f1,T,f2);
sound(y,fs)