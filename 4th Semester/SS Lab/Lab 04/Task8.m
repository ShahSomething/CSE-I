clear all
S = input('Enter a Signal: ');
DS = Downsample (S);

disp(DS);
%figure
subplot(2,1,1)
stem(S);
title('Original Signal')
xlabel('Sample Number')
ylabel('Signal Amplitude')

%figure2
subplot(2,1,2)
stem(DS);
title('DownSampled Signal')
xlabel('Sample Number')
ylabel('Signal Amplitude')




