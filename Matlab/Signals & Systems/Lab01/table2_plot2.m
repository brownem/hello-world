t = 0:0.1:10;
y =24-26.83.*exp(-t).*cos(2.*t-26.6*pi/180);
plot(t,y,'linewidth',2);
legend('(24-26.83.*exp(-t)).*cos(2.*t-26.6*pi/180)');
title('\bf Plot of y(t) = (24-26.83.*exp(-t)).*cos(2.*t-26.6*pi/180)');
xlabel('time t(s)');
ylabel('y(t)');
grid on;
