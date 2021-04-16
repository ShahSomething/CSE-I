h = [2 1 2 4 3];
x = [1 4 3 2];
y = conv(x,h);
subplot(2,1,1);
stem(x);
title('Input x[n]');
xlabel('index, n');
ylabel('Value, x[n]');

subplot(2,1,2);
stem(y,'r');
title('Output y[n]');
xlabel('index, n');
ylabel('Value, y[n]');