x = [1 3 2 1];
H = [1 1 2];
y = conv(x,H);

subplot(2,1,1);
stem(y);
title('L.H.S');
xlabel('index, n');
ylabel('Value, y[n]');

y1=conv(H,x);

subplot(2,1,2);
stem(y1,'r');
title('R.H.S');
xlabel('index, n');
ylabel('Value, y[n]');