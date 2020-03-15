% x(t)=1 ,-0.5<=t<=0.5; 0 ,otherwise 
%k=-7:7
T=2;
syms  x(t) k y(t) n U(t)
x(t)=1
ak=1/T*int(x*exp(-j*k*2*t*pi/T),t,[1 2])
k=-7:7;
ak_val=1/T*int(x*exp(-j*k*2*t*pi/T),t,[1 2])
%k=-7:7;
figure(1)
stem(k,abs(ak_val))
% hold on
% stem(k,imag(ak_val))
xlabel('k')
ylabel('|ak|')
% legend('real values','imaginary values')
title('Magnitude Plot(k from -7 to 7)')
figure(2)
stem(k,angle(ak_val))
ylabel('Phase angle of ak')
xlabel('k')
title('Phase Plot(k from -7 to 7)')
U(t)=piecewise(0<=t<=1,0,1<=t<=2,1)
ak1=1/T*int(x*exp(-j*n*2*t*pi/T),t,[1 2])
V=subs(ak1*exp(j*n*2*pi/T*t),n,-7:-1)+subs(ak1*exp(j*n*2*pi/T*t),n,1:7)+1/2
y(t)=sum(V)
figure(3)
fplot(y-3)
hold on
fplot(U)
title('estimated signal(k from -7 to 7)')
hold off
xlim([-0 3])

T=2
syms  x(t) k y(t) n U(t)
x(t)=1
ak=1/T*int(x*exp(-j*k*2*t*pi/T),t,[1 2])
k=-25:25;
ak_val=1/T*int(x*exp(-j*k*2*t*pi/T),t,[1 2])
%k=-7:7;
figure(4)
stem(k,abs(ak_val))
xlabel('k')
ylabel('|ak|')
title('Magnitude Plot(k from -25 to 25)')
figure(5)
stem(k,angle(ak_val))
ylabel('Phase angle of ak')
xlabel('k')
title('Phase Plot(k from -25 to 25)')
U(t)=piecewise(0<=t<=1,0,1<=t<=2,1)
ak1=1/T*int(x*exp(-j*n*2*t*pi/T),t,[1 2])
V=subs(ak1*exp(j*n*2*pi/T*t),n,-25:-1)+subs(ak1*exp(j*n*2*pi/T*t),n,1:25)+1/2
y(t)=sum(V)
figure(6)
fplot(y-12)
hold on
fplot(U)
title('estimated signal(k from -25 to 25)')
hold off
xlim([-0 3])

