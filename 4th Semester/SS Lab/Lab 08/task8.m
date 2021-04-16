h1 = [1 3 2 1];
h2 = [1 1 2];
x = [1 4 3 2];
y = conv(x,h1);
y1= conv(y,h2);
subplot(2,1,1);
stem(x);
title('Input x[n]');
xlabel('index, n');
ylabel('Value, x[n]');

subplot(2,1,2);
stem(y1,'r');
title('Output y[n]');
xlabel('index, n');
ylabel('Value, y[n]');