t = 0:0.1:10;
x = (4.*exp(-2.*t))-(3.*t.*exp(-3.*t));
plot(t,x,'linewidth',2);
legend('x(t) = (4*exp(-2*t))-(3*t*exp(-3*t)');
title('\bf Plot of x = (4*exp(-2*t))-(3*t*exp(-3*t)');
xlabel('time t(s)');
ylabel('x(t)');
grid on;
