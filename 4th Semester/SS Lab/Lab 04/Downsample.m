function DS=Downsample(S)
j=1;
for i=1:length(S)
    if(mod(i,2)~=0)        
        DS(j)=S(i);
         j=j+1;
    end
end
end

