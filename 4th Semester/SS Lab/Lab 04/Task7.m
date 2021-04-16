X=input('Enter a Signal: ');
count=0;
for i=1:length(X)
    if(X(i)>3 | X(i)<-3)
        count=count+1;
    end
end
disp('The number of samples greater than 3 or less than -3 are: ')
disp(count);

