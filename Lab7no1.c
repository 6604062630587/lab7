#include "stdio.h"
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
void main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	functionM();
	a = functionM();
	b = functionN(a, b);
	r = functionO(r,a,s,b); //can't run because 'functionO' parameter name omitted

	s = functionP(a,b,c,d,e); //can't run because too many argument to function

	u = functionM();
	c = d + functionN(r,s);
	t = s * functionO(r, a, r, a); //can't run because 'functionO' parameter name omitted

	a = v + functionP(r, s, t, t);
	functionP(functionN(a, a), s, t, t+r);
	v = functionP(functionN(a, a), s, t, t+r);
}

