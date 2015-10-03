clear all;
close all;

t = -10 : 0.5 : 10;
y1 = t.^2;
y2 = 100-y1;
plot(t, y1,'linewidth',2); 
hold on;
plot(t,y2,'r');
legend('t^2','100-t^2');
title('\bf Plot of t^2 and (100-t^2)');
xlabel('time t(s)');
grid on;
