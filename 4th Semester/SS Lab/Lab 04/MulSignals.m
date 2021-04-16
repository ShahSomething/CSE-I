function MulSignals(S1,S2)
for i=1:length(S1)
Mul(i)=S1(i)*S2(i);
end
disp(Mul);
i=1:length(S1)
plot(S1,i,'--',S2,i,'+',Mul,i,'-');
end
