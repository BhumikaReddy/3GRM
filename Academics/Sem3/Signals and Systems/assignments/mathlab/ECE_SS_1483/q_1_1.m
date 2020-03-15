% x(t)=1 ,-0.5<=t<=0.5; 0 ,otherwise 
%k=-7:7
T=3;
syms  x(t) k y(t) n U(t)
x(t)=1;
ak=1/T*int(x*exp(-j*k*2*t*pi/T),t,[-0.5 0.5])
k=-7:7;
ak_val=1/T*int(x*exp(-j*k*2*t*pi/T),t,[-0.5 0.5])
%k=-7:7;
figure(1)
stem(k,abs(ak_val))
xlabel('k')
ylabel('|ak|')
title('Magnitude Plot(k from -7 to 7)')
figure(2)
stem(k,angle(ak_val))
ylabel('Phase angle of ak')
xlabel('k')
title('Phase Plot(k from -7 to 7)')
U(t)=piecewise(-1.5<=t<=-0.5,0,-0.5<=t<=0.5,1,0.5<=t<=1.5,0)
ak1=1/T*int(x*exp(-j*n*2*t*pi/T),t,[-0.5 0.5])
 V=subs(ak1*exp(j*n*2*pi/T*t),n,-7:-1)+subs(ak1*exp(j*n*2*pi/T*t),n,1:7)+1/3
  y(t)=sum(V)
% t=-0.5:0.5
figure(3)
fplot(y-2)
%figure(4)
hold on
fplot(U)
title('estimated signal(k from -7 to 7)')
hold off
xlim([-1.5 1.5])

T=3;
syms  x(t) k y(t) n U(t)
x(t)=1
ak=1/T*int(x*exp(-j*k*2*t*pi/T),t,[-0.5 0.5])
k=-25:25;
ak_val=1/T*int(x*exp(-j*k*2*t*pi/T),t,[-0.5 0.5])
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
U(t)=piecewise(-1.5<=t<=-0.5,0,-0.5<=t<=0.5,1,0.5<=t<=1.5,0)
ak1=1/T*int(x*exp(-j*n*2*t*pi/T),t,[-0.5 0.5])
 V=subs(ak1*exp(j*n*2*pi/T*t),n,-25:-1)+subs(ak1*exp(j*n*2*pi/T*t),n,1:25)+1/3
  y(t)=sum(V)
% t=-0.5:0.5
figure(6)
fplot(y-8)
%figure(4)
hold on
fplot(U)
title('estimated signal(k from -25 to 25)')
hold off
xlim([-1.5 1.5])
