#include "sp_besselk.h"

sp_BesselK::sp_BesselK(double _order)
    : sp_complexBessel(_order)
{
}

complexd sp_BesselK::operator()(const complexd z)
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
    zbesk_(&zr,&zi,&nu,&kode,&N,&cyr,&cyi,&nz,&ierr);

    complexd answer(cyr,cyi);

    return answer;
}

