clear all; close all;
%analytical
t = 0:0.1:3;
c = 1-1.1577*exp(-2.0363*t).*cos(3.49*t-30.25*pi/180);
plot(t,c, 'r'); 
hold on;

%simulation

sim_data = [0,0.03;0.5,0.86;1,1.15;1.5,1;2,1.01;2.5,0.98;3,0.99];

plot(sim_data(:,1),sim_data(:,2), 'b');

%experimental
exp_data = [0,0.04;.5,.85;1,1.15;1.5,.95;2,1;2.5,0.97;3,.98];
plot(exp_data(:,1),exp_data(:,2),'bl*');
legend('Analytical','Simulation Data','Experimental Data');
xlabel('time (second)');
