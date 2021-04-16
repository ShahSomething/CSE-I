x1 = [3 1 1];
x2 = [4 2 1];
x3 = [3 2 1 2 3];
y1 = conv(x1,x2);
y2 = conv(y1,x3);

subplot(2,1,1);
stem(y2);
title('L.H.S');
xlabel('index, n');
ylabel('Value, y[n]');

y3=conv(x2,x3);
y4=conv(y3,x1);

subplot(2,1,2);
stem(y4,'r');
title('R.H.S');
xlabel('index, n');
ylabel('Value, y[n]');