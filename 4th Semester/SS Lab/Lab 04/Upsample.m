function US=Upsample(S)
 j=1;
for i=1:2*length(S)
    if(mod(i,2)==0)
       US(i)=0;
    else
       US(i)=S(j);
       j=j+1;
    end
end

