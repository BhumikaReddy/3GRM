syms n;

h(n)=(1/4)^n*heaviside(n);

h(z)=ztrans(h(n));

display(h(z));