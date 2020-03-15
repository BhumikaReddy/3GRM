n=[-20:20];
u_n = (n<=0);
a=0.5;
xn=a.^n.*u_n;
subplot(311);
stem(n,xn);
subplot(311);
stem(n,xn);
title('Input Sequence x(n)');
k=-1500:1500;
w=(pi/500).*k;
for a=1:length(w)
y(a) = sum(xn.*exp(-j*w(a)*n));
end
subplot(312);
plot(w,abs(y));
grid;
title('Magnitude Spectrum');
xlabel('Frequency');
ylabel('|x(w)|');
subplot(313);
plot(w,angle(y));
grid;
title('Phase Spectrum');
xlabel('Frequency');
ylabel('x(w)');

