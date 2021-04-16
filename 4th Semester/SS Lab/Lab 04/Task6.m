X1=[2 5 8 4 3 0 0 0]  
X2=[0 0 0 0 1 4 3 2]

for i=1:8
    X(i)=X1(i)+X2(i);
end
disp('Result is: ')
disp(X);
i=1:8;
plot(X1,i,'-r',X2,i,'*g',X,i,'--b')

