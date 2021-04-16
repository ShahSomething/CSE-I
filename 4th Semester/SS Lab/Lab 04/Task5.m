S1=input('Enter Signal 1:');
S2=input('Enter Signal 2:');
while(length(S1)~=length(S2))
disp('Error: Length of signals must match. Enter the 2nd signal again')
S2=input('');
end
subplot(1,2,1)
AddSignals(S1,S2)
subplot(1,2,2)
MulSignals(S1,S2)