clear all
clc

%% Problem 1%%
x1=[1 2 3 2 1 1];
b1=[2 -3 2];
y1=conv(b1,x1)

%% Problem 2%%
n2=0:49;
fs2=1000;
f2=325;
x2=8*cos(2*pi*f2*(n2/fs2));

figure
hold all
stem(n2,x2)
plot(n2,x2)

b2=[1/3 1/3 1/3];
y2=conv(b2,x2);

nn2=0:51;

figure
hold all
plot(nn2,y2)
plot(n2,x2)


%% Problem 3%%
n3=0:999;
fs3=1000;
f3=100;
f31=325;
x3=8*cos(2*pi*f3*(n3/fs3)) + 8*cos(2*pi*f31*(n3/fs3));
sptool


%% Problem 4%%
load handel
sound(y,Fs)
yy4=3*y;
sound(yy4,Fs)
sound(y,16000)
sound(y,4000)
z=flipud(y);
sound(z,Fs)

b4=[1/3 1/3 1/3];
figure
hold all
freqz(b4,1,256,1000)
freqz(b4,1,256,500)
b4=[1 -1];
figure
hold all
freqz(b4,1,256,500)