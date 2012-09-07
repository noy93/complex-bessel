#ifndef SP_BESSELY_H
#define SP_BESSELY_H

#include "sp_complexBessel.h"

/*! \author Joey Dumont <joey.dumont@gmail.com>
 *  \author Denis Gagnon <gagnon88@gmail.com>
 *
 * \date 2012-09-06
 *
 * \brief Computes the Bessel function of the second kind.
 *
 * We use the Fortran subroutine ZBESY to compute the Bessel
 * function of the second kind. For negative orders, we use
 * \f[ Y_{-\nu}(z) = Y_\nu(z)\cos(\pi\nu)+J_\nu(z)\sin(\pi\nu) \f].
 *
 * \copyright LGPL.
 */

class sp_BesselY : public sp_complexBessel
{
public:
    sp_BesselY(double _order);

    complexd operator()(const complexd z);
};

#endif // SP_BESSELY_H
