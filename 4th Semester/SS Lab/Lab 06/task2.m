clear all
x=0.5;
    
for n=1:8;
V(n)=sin(n*(pi*x));
end;
n=1:8;
figure,plot(n,V,'--','linewidth',3);
grid;
xlabel('x-axis');
ylabel('y-axis');
