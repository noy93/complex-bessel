#ifndef SP_BESSELJ_H
#define SP_BESSELJ_H

#include "sp_complexBessel.h"

/*! \author Joey Dumont <joey.dumont@gmail.com>
 *  \author Denis Gagnon <gagnon88@gmail.com>
 *
 * \date 2012-09-06
 *
 * \brief Computes the Bessel function of the first kind.
 *
 * We use the Fortran subroutine ZBESJ to compute the
 * Bessel function of the first kind. For negative orders, we
 * use the formula
 * \f[ J_{-\nu}(z) = J_\nu(z)\cos(\pi\nu)-Y_\nu(z)\sin(\pi\nu) \f].
 *
 * \copyright LGPL.
 */

class sp_BesselJ : public sp_complexBessel
{
public:
    /*! Constructor defines order. */
    sp_BesselJ(double _order);

    /*! Implemented pure virtual function. */
    complexd operator()(const complexd z);
};

#endif // SP_BESSELJ_H
