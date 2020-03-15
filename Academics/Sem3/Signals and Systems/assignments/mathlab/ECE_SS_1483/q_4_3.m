syms n;

h(n)=3^(n-2)*heaviside(n);

h(z)=ztrans(h(n));

display(h(z));