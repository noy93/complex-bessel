#ifndef SP_BESSELK_H
#define SP_BESSELK_H

#include "sp_complexBessel.h"

/*! \author Joey Dumont <joey.dumont@gmail.com>
 *  \author Denis Gagnon <gagnon88@gmail.com>
 *
 * \date 2012-09-06
 *
 * \brief Computes the modified Bessel function of the second kind.
 *
 * We use the Fortran subroutine ZBESK to compute the modified
 * Bessel function of the second kind. For negative orders, we
 * have the simple relation \f$K_{-\nu}(x)=K_\nu(x)\f$.
 *
 * \copyright LGPL.
 */

class sp_BesselK : public sp_complexBessel
{
public:
    /*! Constructor defines order. */
    sp_BesselK(double _order);

    /*! Implemented pure virtual function. */
    complexd operator()(const complexd z);
};

#endif // SP_BESSELK_H
