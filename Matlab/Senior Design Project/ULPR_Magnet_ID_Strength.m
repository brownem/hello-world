clc
clear all
close all

%%Internal Diamter
Array = csvread('ULPR_Magnet-ID_Strength.csv');
time = Array(:, 1);
mT = Array(:, 2);

figure
plot(time,mT)
[ymax,imax,ymin,imin]  = extrema(mT);
Pmax=max(ymax);
Nmin=min(ymin);
Pmean=mean(ymax);
Nmean=mean(ymin);
hold all
plot(time(imax),ymax,'b*',time(imin),ymin,'ro')
plot(xlim, [1 1]*Pmax, '--b')
plot(xlim, [1 1]*Nmin, '--r')
plot(xlim, [1 1]*Pmean, ':b')
plot(xlim, [1 1]*Nmean, ':r')
hold off
title('Toroidal Testing Magnet - Inner Circumference Field Strength')
ylim([-8.5,6])
legend('Field Strength','Maximas','Minimas','Max','Min','Positive Mean','Negative Mean','location','Southeast')

xlabel('Radians (W)')
ylabel('Magnetic Field (mT)')