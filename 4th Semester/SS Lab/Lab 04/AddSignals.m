function AddSignals(S1,S2)
for i=1:length(S1)
Sum(i)=S1(i)+S2(i);
end
disp(Sum);
i=1:length(S1)
plot(S1,i,'--',S2,i,'+',Sum,i,'-');
end



