t=0:0.05:4;
A=3;
p=-0.4;
w=2*p*(1250);
X=A*exp(i*(w*t+p));

subplot(2,1,1);
stem(t,real(X),'filled');
title('Real Part');

subplot(2,1,2);
stem(t,imag(X),'filled');
title('Imaginary Part');