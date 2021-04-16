t=0:1/10:10;
w=pi/2;
A=5;
X=A*exp(w*t*i);
X1=conj(X);

subplot(2,1,1)
stem(t,real(X),'filled');
hold on;
stem(t,real(X1),'filled');
title('Real part');
xlabel('X-axis');
ylabel('Y-axis');

subplot(2,1,2)
stem(t,imag(X),'filled');
hold on;
subplot(2,1,2)
stem(t,imag(X1),'filled');
title('Imaginary Part');
xlabel('X-axis');
ylabel('Y-axis');