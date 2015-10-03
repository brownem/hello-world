clc
clear all

%impulse response
disp('Impulse Response')

y_1  = dsolve('D2y + 4*Dy + 3*y = 0', 'y(0)=0', 'Dy(0)=1', 't');
Dy_1 = diff(y_1) + 5;
disp(['h(t)=(',char(Dy_1),') u(t)'])

y_2  = dsolve('D2y + 6*Dy + 9*y = 0', 'y(0)=0', 'Dy(0)=1', 't');
Dy_2 = 2*diff(y_2) + 9;
disp(['h(t)=(',char(Dy_2),') u(t)'])

disp(' ')


%total response
disp('Total Response')

y_3=dsolve('D2y + 5*Dy + 6*y = 2*(exp(-3*t))', 'y(0)=1', 'Dy(0)=1', 't');
disp(['y(t)=(',char(y_3),') u(t)'])

y_4=dsolve('D2y + 3*Dy + 2*y = 2*(10*exp(-3*t))', 'y(0)=5', 'Dy(0)=0', 't');
disp(['y(t)=(',char(y_4),') u(t)'])