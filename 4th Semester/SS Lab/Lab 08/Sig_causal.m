function Sig_causal(n,x)
subplot(3,1,1);
stem(n,x,'filled');
xlabel('Time');
ylabel('Amplitude');
title('Input Signal');

u = (n>=0);
x1 = x.*u;
subplot(3,1,2);
stem(n,u, 'r','filled');
xlabel('Time');
ylabel('Amplitude');
title('Unit Step');

subplot(3,1,3);
stem(n,x1, 'g','filled');
xlabel('Time');
ylabel('Amplitude');
title('Causal Version');

end