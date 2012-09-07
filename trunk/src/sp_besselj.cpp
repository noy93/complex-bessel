#include "sp_besselj.h"

sp_BesselJ::sp_BesselJ(double _order)
    : sp_complexBessel(_order)
{
}

complexd sp_BesselJ::operator()(const complexd z)
{
    // Input values
    double zr = real(z);
    double zi = imag(z);
    double nu = fabs(order);
    int kode = 1;
    int N = 1;

    // Output values
    double cyr,cyi;
    int nz,ierr;

    // External function call
    zbesj_(&zr,&zi,&nu,&kode,&N,&cyr,&cyi,&nz,&ierr);
    complexd answer(cyr,cyi);

    if (order < 0.0)
    {
        double cwrkr,cwrki,cyr2,cyi2;
        zbesy_(&zr,&zi,&nu,&kode,&N,&cyr2,&cyi2,&nz,&cwrkr,&cwrki,&ierr);

        complexd answer2(cyr2,cyi2);

        return answer*cos(pi*nu)-answer2*sin(pi*nu);
    }

    return answer;
}
