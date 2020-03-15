syms n;

h(n)=heaviside(n);

h(z)=ztrans(h(n));

display(h(z));  