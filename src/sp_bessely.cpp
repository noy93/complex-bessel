#include "sp_bessely.h"

sp_BesselY::sp_BesselY(double _order)
    : sp_complexBessel(_order)
{
}

complexd sp_BesselY::operator ()(const complexd z)
{
    // Input values
    double zr = real(z);
    double zi = imag(z);
    double nu = fabs(order);
    int kode = 1;
    int N = 1;

    // Output values
    double cwrkr,cwrki,cyr,cyi;
    int nz,ierr;

    // External function call
    zbesy_(&zr,&zi,&nu,&kode,&N,&cyr,&cyi,&nz,&cwrkr,&cwrki,&ierr);
    complexd answer(cyr,cyi);

    // We use the negative order formula.
    if (order < 0.0)
    {
        double cyr2,cyi2;
        zbesj_(&zr,&zi,&nu,&kode,&N,&cyr2,&cyi2,&nz,&ierr);

        complexd answer2(cyr2,cyi2);

        return answer*cos(pi*nu)+answer2*sin(pi*nu);
    }

    return answer;
}
