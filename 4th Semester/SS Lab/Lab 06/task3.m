clear all
for x=1:2*pi;
V(x)=exp(-x)*sin(8*x);
end;
x=1:2*pi;
subplot(2,1,1);
stem(x,V);
title('Discrete-Time Signal');
subplot(2,1,2);
plot(x,V,'--');
title('Continuous-Time Signal');