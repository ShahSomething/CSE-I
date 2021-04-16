clc
clear all
close all
alpha=input('Enter alpha:\n');
beta=input('Enter beta:\n');
LHS= sin(alpha)*sin(beta);
RHS=(1/2)*(cos(alpha-beta)-cos(alpha+beta));


disp('The RHS is');
RHS
disp('The LHS is');
LHS

LHS= sin(alpha)*cos(beta)+cos(alpha)*sin(beta);
RHS=sin(alpha+beta);


disp('The RHS is');
RHS
disp('The LHS is');
LHS
