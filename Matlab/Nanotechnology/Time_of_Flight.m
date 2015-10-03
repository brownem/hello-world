clear
clc

%The following calculations are for the particle comprised of Nickel, for
%the Copper, Gold and Iron particles, change the times (t) to 16
%micro-seconds, 66 micro-seconds and 85 micro-seconds, respectively, and
%the atomic-masses to 63.546, 196.96654 and 55.845, also respectively. 

d=1.5 %distance traveled in Meters (known)
t=110*10^-6 %Recorded time of flight in seconds (ToF)
Am=58.6934 %Atomic Mass of element

u=15000; %Electric Potential difference in Volts (known)
q=1.602*10^-19; %charge of particle in coulombs - equal to 1 eV


k=(d/(sqrt(2*u))) %Proportionality constant
m=q*((t/k)^2); %Mass in Kilograms

amu=m*(6.022136651675E+26) %Conversion into Atomic-Mass units
mcr=amu/q %Mass-to-charge ratio
nA=amu/Am %Number of Atoms