clc
clear all
n = 0:0.15:19; 
x = cos(2*pi*n/2);

stem(n, x,'filled');
xlabel('Index Value, n');
ylabel('Amplitude, A');
title('Discrete Time Cosine');

abs_x_2 = abs(x).^2; 
N = 20;
delta_n = 0.15; 
px = sum(abs_x_2)*delta_n/N