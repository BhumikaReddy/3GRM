%linerlity Prperty
oldparam=sympref('HeavisideAtOrigin',1);
x=(exp(-t)*(heaviside(t)-heaviside(t-1)))+(exp(-t)*(heaviside(t-1)-heaviside(t-2)));
y=(exp(t)*(heaviside(t)-heaviside(t-1)))+(exp(-t)*(heaviside(t-1)-heaviside(t-2)));
X=fourier(x);
Y=fourier(y);
prompt=('Enter the value of a ');
a=input(prompt);
prompt=('Enter the value of b ');
b=input(prompt);
z=(a*x)+(b*y);
Z=fourier(z);
disp(X);
disp(Y);
disp(Z);
%Time Shift Property for 3(a)
prompt=('Enter the value of t0 ');
t0=input(prompt);
x_shift=(exp(-(t-t0))*(heaviside(t-t0)-heaviside(t-t0-1)))+(exp(-(t-t0))*(heaviside(t-t0-1)-heaviside(t-t0-2)));
X_SHIFT=fourier(x_shift);
disp(X_SHIFT);
%Time Shift prperty for 3(b)
y_shift=(exp(t-t0)*(heaviside(t-t0)-heaviside(t-t0-1)))+(exp(-(t-t0))*(heaviside(t-t0-1)-heaviside(t-t0-2)));
Y_SHIFT=fourier(y_shift);
Y=simplify(Y_SHIFT);
disp(Y);