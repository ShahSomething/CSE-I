function zprint(comp)
disp('Z = X + jY Magnitude Phase Ph(deg)');
disp('Real Part: ');
disp(real(comp));
disp('Imaginary Part: ');
disp(imag(comp));
disp('Magnitude : ');
disp(abs(comp));
disp('Phase Angle: ');
disp(angle(comp));
disp('Ph(deg): ');
disp(angle(comp)*57.5);
end
