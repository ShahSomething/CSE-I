h = [3 -1 2 1];
x = [2 4 6 4 2];
y = conv(h,x);
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