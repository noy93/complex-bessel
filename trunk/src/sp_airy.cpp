#include "sp_airy.h"

sp_airy::sp_airy(int _kind, int _order)
{
    setKind(_kind);
    setOrder(_order);
}

complexd sp_airy::operator ()(const complexd z)
{
    // Input values
    double zr = real(z);
    double zi = imag(z);
    int kode = 1;

    // Output values
    double air,aii;
    int nz,ierr;

    // External function call
    if (kind==0){zairy_(&zr,&zi,&order,&kode,&air,&aii,&nz,&ierr);}
    if (kind==1){zbiry_(&zr,&zi,&order,&kode,&air,&aii,&ierr);}

    complexd answer(air,aii);

    return answer;
}
