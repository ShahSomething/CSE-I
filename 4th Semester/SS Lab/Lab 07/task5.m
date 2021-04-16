n=-10:10;
x=[zeros(1,10) ones(1,1) zeros(1,10)];
x0=2*x;

x=[zeros(1,11) ones(1,1) zeros(1,9)];
x1=5*x;

x=[zeros(1,12) ones(1,1) zeros(1,8)];
x2=8*x;

x=[zeros(1,13) ones(1,1) zeros(1,7)];
x3=4*x;

x=[zeros(1,14) ones(1,1) zeros(1,6)];
x4=3*x;

xr=x0+x1+x2+x3+x4;
subplot(2,1,1);
stem(n,xr,'filled');
axis([-10 10 -10 10]);
title('Original Signal');
subplot(2,1,2);
stem(-n,xr,'filled');
axis([-10 10 -10 10]);
title('Flipped Signal');