#include "sp_besseli.h"

sp_BesselI::sp_BesselI(double _order)
    : sp_complexBessel(_order)
{
}

complexd sp_BesselI::operator ()(complexd z)
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

    // External funtion call
    zbesi_(&zr,&zi,&nu,&kode,&N,&cyr,&cyi,&nz,&ierr);

    complexd answer(cyr,cyi);

    if (order < 0.0)
    {
        double cyr2,cyi2;

        zbesk_(&zr,&zi,&nu,&kode,&N,&cyr2,&cyi2,&nz,&ierr);

        complexd answer2(cyr2,cyi2);

        return answer+(2.0/pi)*sin(pi*nu)*answer2;
    }

    return answer;
}
