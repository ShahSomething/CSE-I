X1=[1 2 2 1 1];
X2=[3 2 0 1 2];

disp('X1 has a smaller value than X2 at the following index: ');

for i=1:5
    if(X1(i)<X2(i))
        disp(i);
    end
end

