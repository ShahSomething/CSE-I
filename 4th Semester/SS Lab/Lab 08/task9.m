x1 = [2 -3 3 4 -2];
x2 = [4 2 3 -1 -2];
x3 = [3 5 -3 4];

figure(1); % for association law
y = conv(x2,x3);
y1= conv(y,x1);
subplot(2,1,1);
stem(y1);
title('L.H.S');
xlabel('index, n');
ylabel('Value, y[n]');

y2 = conv(x1,x2);
y3= conv(y2,x3);
subplot(2,1,2);
stem(y3,'r');
title('R.H.S');
xlabel('index, n');
ylabel('Value, y[n]');

figure(2); %for commutative law
y4 = conv(x1,x2);

subplot(2,1,1);
stem(y4);
title('L.H.S');
xlabel('index, n');
ylabel('Value, y[n]');

y5 = conv(x2,x1);
subplot(2,1,2);
stem(y5,'r');
title('R.H.S');
xlabel('index, n');
ylabel('Value, y[n]');