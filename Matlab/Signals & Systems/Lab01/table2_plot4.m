w = 0:10:1000000;
R = 1000;
L = 0.004;
C = 0.0016*10^-6;

c =(abs((1./(L.*C))-w.^2))./(sqrt(((1./(L.*C))-w.^2).^2+(w./(R.*C)).^2));
plot(w,c,'linewidth',2);
legend('c(w)');
title('\bf Plot of c(w) = 24+26.83.*exp(-t).*cos(2.*t+153.4*pi/180)');
xlabel('angular frequency w (rad/s)');
ylabel('c(w)');
grid on;
