clc
clear all
close all
t = -2:0.005:2; %square wave duration
T = 1; %time period of square wave
T1 = 1/4; %duty cycle of square wave
w0 = 2*pi/T; %fundamental radian frequency of square wave
M = 60; %number of coefficients
x = zeros(1,length(t));
for k = -M:M; %2M+1 total coefficients to construct square wave

if(mod(k,2)==0)
ak = 1;
x = x + ak*exp(j*k*w0*t);
else
ak = 2;
x = x + ak*exp(j*k*w0*t);
end
end


plot(t,x,'lineWidth',2);
grid;
xlabel('t');
ylabel('x(t)');
title('Reconstruction from Fourier Series, M=100');