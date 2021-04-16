function[c]= task4(n)
c=zeros(1,n);
for (a=1:n)
    if(a<3)
        c(1,a)=a^2;
    elseif(a>=3 && a<7)
        c(1,a)=a+3;
    else
        c(1,a)=a;
    end
end