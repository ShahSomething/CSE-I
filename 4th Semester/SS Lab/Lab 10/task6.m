clc
clear all
close all
t = -5:0.005:5; %square wave duration
T = 1; %time period of square wave
T1 = 1/4; %duty cycle of square wave
w0 = 2*pi/T; %fundamental radian frequency of square wave
M = 10; %number of coefficients
x = zeros(1,length(t));
for k = -M:M; %2M+1 total coefficients to construct square wave
if(abs(k)< 3)
ak = j*k;
x = x + ak*exp(j*k*w0*t);
else
ak = 0;
x = x + ak*exp(j*k*w0*t);
end
end


plot(t,x,'lineWidth',2);
grid;
xlabel('t');
ylabel('x(t)');
title('Reconstruction from Fourier Series, M=10');