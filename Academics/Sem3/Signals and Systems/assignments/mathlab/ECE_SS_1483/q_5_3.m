syms z;

h(z)=(1+(7/6)*z^-1)/((1-(1/2)*z^-1)*(1+(1/3)*z^-1));

h(t)=iztrans(h(z));

display(h(t));