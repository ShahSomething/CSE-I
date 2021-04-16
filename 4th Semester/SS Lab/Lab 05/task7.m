n=0:10;
a=0.7;
X=power(a,n);

subplot(2,2,1);
stem(n,X,'filled');    %Discrete 
title('For a=0.7');
subplot(2,2,2);
plot(n,X);      %Continuous
title('For a=0.7');


a=1.3;
X=power(a,n);

subplot(2,2,3);
stem(n,X,'filled');    %Discrete 
title('For a=1.3');
subplot(2,2,4);
plot(n,X);      %Continuous
title('For a=1.3');