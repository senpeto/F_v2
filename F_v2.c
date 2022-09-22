#include <math.h>
#include <stdio.h>
#include "fx.c"
#include "gx.c"

int main() {
float x, fx, gx;
printf ("Your x: ");
scanf ("%f", &x);
fx = fxfunc(x);
gx = gxfunc(x);
printf ("F(x) = %f \nG(x) = %f", fx, gx);
return 0;
}
