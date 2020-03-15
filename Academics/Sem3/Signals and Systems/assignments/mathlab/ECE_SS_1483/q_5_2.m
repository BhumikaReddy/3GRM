syms z;

h(z)=(z^2-3*z)/(z^2-(3/2)*z-1);

h(t)=iztrans(h(z));

display(h(t));