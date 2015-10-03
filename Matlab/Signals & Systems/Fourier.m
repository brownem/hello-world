clc
clear all

figure; t= -10:0.05:10;
subplot(2,1,1);
x1=0.504;

for n=1:20
    x1=x1+(0.504*2)/(1+16*n^2) * (cos(2*n*t)+4*n*sin(2*n*t));
end

plot (t, x1);
grid on;
xlabel ('time (sec)');
ylabel ('X1(t)');
axis([min(t) max(t) min(x1) max(x1)]);