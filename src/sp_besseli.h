#ifndef SP_BESSELI_H
#define SP_BESSELI_H

#include "sp_complexBessel.h"

/*! \author Joey Dumont <joey.dumont@gmail.com>
 *  \author Denis Gagnon <gagnon88@gmail.com>
 *
 * \date 2012-09-06
 *
 * \brief Computes the modified Bessel function of the first kind.
 *
 * We use the Fortran subroutine ZBESI to compute the modified Bessel
 * function of the first kind. For negative orders, we use
 * the formula \f[ I(-\nu,z) = I(\nu,z) +\frac{2}{\pi}\sin(\pi\nu)K(\nu,z) \f].
 * Amos says.
 * <BLOCKQUOTE>
 *
 *   C   HOWEVER,FOR LARGE ORDERS CLOSE TO INTEGERS, THE
 *   C         THE FUNCTION CHANGES RADICALLY. WHEN FNU IS A LARGE POSITIVE
 *   C         INTEGER,THE MAGNITUDE OF I(-FNU,Z)=I(FNU,Z) IS A LARGE
 *   C         NEGATIVE POWER OF TEN. BUT WHEN FNU IS NOT AN INTEGER,
 *   C         K(FNU,Z) DOMINATES IN MAGNITUDE WITH A LARGE POSITIVE POWER OF
 *   C            TEN AND THE MOST THAT THE SECOND TERM CAN BE REDUCED IS BY
 *   C         UNIT ROUNDOFF FROM THE COEFFICIENT. THUS, WIDE CHANGES CAN
 *   C         OCCUR WITHIN UNIT ROUNDOFF OF A LARGE INTEGER FOR FNU. HERE,
 *   C         LARGE MEANS FNU.GT.CABS(Z).
 * </BLOCKQUOTE>
 *
 * \copyright LGPL.
 */

class sp_BesselI : public sp_complexBessel
{
public:
    /*! Constructor defines order. */
    sp_BesselI(double _order);

    /*! Implemented pure virtual function. */
    complexd operator()(const complexd z);
};

#endif // SP_BESSELI_H
