clc
clear all
close all
t1= clock;
Var1 = input('Enter var1:\n');
Var2 = input('Enter var2:\n');
Var1= Var1+Var2;
Var2= Var1-Var2;
Var1= Var1-Var2;
disp('After Swapping:')
disp('Var1=')
disp(Var1);
disp('Var2=')
disp(Var2);
t2=clock;
disp('Time:');
disp(etime(t2,t1));

