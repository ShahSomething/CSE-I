clear all
t=-1:1/1000:1;
A=5;
phase=pi/2;
f=3;
x1=A * sin(2*pi*f*t + phase);

subplot(2,1,1);
plot(t,x1, 'linewidth', 2);
title('Sine Signal');
xlabel('Time Index');
ylabel('Signal Amplitude');


phase=0;
x2=A * cos(2*pi*f*t + phase);
subplot(2,1,2);
plot(t,x2, 'linewidth', 2);
title('Cosine Signal');
xlabel('Time Index');
ylabel('Signal Amplitude');