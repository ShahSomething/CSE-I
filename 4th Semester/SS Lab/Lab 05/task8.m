t=0:0.15:5;
X1=5* exp(pi/4*t*i);
a=0.5;
X2=power(a,t);

X3=X1.*X2;
a=2;
X4=power(a,t);
X5=X1.*X4;

subplot(4,1,1);
stem(t,real(X3),'filled');
title('Real Part (0<a<1)');

subplot(4,1,2);
stem(t,imag(X3),'filled');
title('Imaginary Part (0<a<1)');

subplot(4,1,3);
stem(t,real(X5),'filled');
title('Real Part (a>1)');




subplot(4,1,4);
stem(t,imag(X5),'filled');

title('Imaginary Part (a>1)');
