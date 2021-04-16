num=input('Enter the Number of Sinusoids: ' );
x1=0;
for n=1:num
    f=0.5;
    Phase=input('Enter Phases: ');
    A=5;
    t=-2:0.01:2;
    x=A*cos(2*pi*f*t + Phase);
   
    subplot(num+1,1,n);
    plot(t,x);
    title('Sinsoidal Signal');
    
    x1=x1+x;
    grid;
end;
subplot(num+1,1,n+1);
plot(t,x1);
 title('Resultant Sinsoidal Signal');
grid;