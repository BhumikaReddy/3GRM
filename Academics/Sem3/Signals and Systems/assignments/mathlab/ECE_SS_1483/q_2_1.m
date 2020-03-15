t=0:0.01:10;
 x=exp(-2*t);
 w=-10:0.01:10;
 for j=1:length(w)
Xjw(j)=(sum(x.*exp(-i*w(j)*t)))*0.01;
       end
 %plot x(t)
 subplot(311);
 plot(t,x);
 title('x(t)=e^(at)u(-t), a>0');
 %plot magnitude spectrum
 subplot(312);
 plot(w,abs(Xjw));
 title('Magnitude spectrum');
 xlabel('frequency w');
 ylabel('|X(jw)|');
 %plot phase spectrum
 subplot(313);
 plot(w,angle(Xjw));
 title('Phase spectrum');
 xlabel('frequency w');
 ylabel('Phase (X(jw))');
