### Development has moved to [GitHub](http://github.com/valandil/complex_bessel). ###
### All information contained here is deprecated. ###

## Introduction ##

C++ library that acts as a wrapper for the Fortran subroutines developed by D.E. Amos. The library provides functionality to compute the Bessel, Hankel and Airy functions of complex argument and nonnegative order. Negative orders are implemented via the standard formulae.

We provide a shared object library and header files to be included.

![http://complex-bessel.googlecode.com/files/contours.png](http://complex-bessel.googlecode.com/files/contours.png)

## Usage ##
Some example programs are included in the `tests/` directory of the project. We nonetheless provide a simple program that computes a Bessel function.
```c++

#include <complex_bessel.h>

int main()
{
int order = 2;
complex<double> z(1.0,0.0);
cout << sp_bessel::besselJ(order, z) << endl;

return 0;
}
```
which is compiled with
```bash

g++ -lgfortran -lcomplex_bessel example.cpp
```
The output is simply
```c++

(0.114903,1.40716e-17)
```

We simply call the besselJ(order, z) function which returns the proper value.

For real arguments, it might be better to use the Boost implementations.