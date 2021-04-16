function ScaleAmplitude(Signal,F)
Size=length(Signal);
for j=1:Size
    Signal(j)=Signal(j)*F;
end
disp('The new Signal is: ');
disp(Signal);
end

