t = 0:0.1:10;
z =24+26.83.*exp(-t).*cos(2.*t+153.4*pi/180);
plot(t,z,'linewidth',2);
legend('z(t)=24+26.83.*exp(-t).*cos(2.*t+153.4*pi/180)');
title('\bf Plot of z(t) = 24+26.83.*exp(-t).*cos(2.*t+153.4*pi/180)');
xlabel('time t(s)');
ylabel('z(t)');
grid on;
