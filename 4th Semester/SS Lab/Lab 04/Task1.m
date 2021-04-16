clc
clear all
close

x1=[2 5 8 4 3];
x2=[4 3 2 0 0];

disp('Part A : Vertor Addition and Multiplication')
Sum=x1+x2
Product=x1.*x2

disp('Part B : Using For Loop')
    for j=1:5
    S2(j)=x1(j)+x2(j);
    end
disp('Sum :')
disp(S2);

    for j=1:5
    M2(j)=x1(j)*x2(j);
    end
disp('Product :')
disp(M2);

