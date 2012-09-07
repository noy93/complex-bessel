#include "sp_hankel.h"

sp_Hankel::sp_Hankel(int _kind, double _order)
    : sp_complexBessel(_order)
{
    setKind(_kind);
}

complexd sp_Hankel::operator ()(const complexd z)
{
    // Input values
    double zr = real(z);
    double zi = imag(z);
    double nu = fabs(order);
    int kode = 1;
    int N = 1;

    // Ouput values
    double cyr,cyi;
    int nz,ierr;

    // Do something if order is negative
    complexd coefficient(1.0,0.0), i(0.0,1.0);
    if (order < 0.0)
    {
        if (kind==1){coefficient*=exp(i*pi*nu);}
        if (kind==2){coefficient*=exp(-i*pi*nu);}
    }

    // External function call
    zbesh_(&zr,&zi,&nu,&kode,&kind,&N,&cyr,&cyi,&nz,&ierr);

    complexd answer(cyr,cyi);

    return coefficient*answer;
}
