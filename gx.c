#include <math.h>

float gxfunc(float x) {
float gx;
gx = exp(-(abs(x)))*cos(x);
return gx;
}
