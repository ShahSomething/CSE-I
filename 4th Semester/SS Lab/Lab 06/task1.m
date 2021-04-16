for i=1:10
    V(i)=cos(i*(pi/4));
end;

i=1:10;
figure,plot(i,V,'--','linewidth',2);
grid;
xlabel('x-axis');
ylabel('y-axis');