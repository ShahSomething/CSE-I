function [S] = specmat(x)
S=ones(x);
for i=2:x  
    for j=2:x 
        
        S(i,j)=S(i,j-1)+S(i-1,j); 
          
        if S(i,j)>20  
            if S(i,j-1) > S(i-1,j)
            S(i,j)= S(i,j-1);
            else
            S(i,j)= S(i-1,j);
            end     
        end
    end
end