clc
clear all
close all
ff=0.5;
fs=1000;
t=0:1/fs:8;
A=4/pi;
har1=A*sin(2*pi*ff*t);
for k=3:2:55
    A=4/(pi*k);
    har2=A*sin(2*pi*ff*t*k);
    har1=har1+har2;
end
plot(t,har1,'linewidth',1.5);
title('A square wave with harmonic 1 to 27');
xlabel('Time');
ylabel('Amplitude');