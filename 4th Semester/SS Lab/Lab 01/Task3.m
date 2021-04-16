clc
clear all
close all
CP=input('Grade points in Computer Programming:\n');
CPCH=input('Credit Hour(s):\n');
CS=input('Grade points in CS:\n');
CSCH=input('Credit Hour(s):\n');
DR=input('Grade points in Drawing:\n');
DRCH=input('Credit Hour(s):\n');
nom= CP*CPCH+CS*CSCH+DR*DRCH;
den=CPCH+CSCH+DRCH;
GPA= nom/den;
disp('Your GPA is: ');
GPA