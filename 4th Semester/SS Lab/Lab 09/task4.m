clc
clear all
close all
t=0:0.01:0.25;
ff=25;
x1=(-8/(pi^2))*exp(i*(2*pi*ff*t));
for k=3:2:21
    fh=ff*k;
    x=(-8/(pi^2*k^2))*exp(i*(2*pi*fh*t));
    y=x1+x;
end
plot(t,real(y),'linewidth',3);
title('Triangular Wave with N=11');
ylabel('Amplitude');
xlabel('Time');
grid;