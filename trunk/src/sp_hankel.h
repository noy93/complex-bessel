#ifndef SP_HANKEL_H
#define SP_HANKEL_H

#include "sp_complexBessel.h"

/*! \author Joey Dumont <joey.dumont@gmail.com>
 *  \author Denis Gagnon <gagnon88@gmail.com>
 *
 * \date 2012-09-07
 *
 * \brief Computes the Hankel function of both kinds.
 *
 * We use the Fortran subroutine ZBESH to compute the
 * Hankel function of both kinds. For negative orders,
 * we use the formulae
 * \f{eqnarray}{
 *  H^{(1)}_{-\nu}(z) &=& H^{(1)}_\nu(z)\exp\left(\pi\nu\imath\right)\\
 *  H^{(2)}_{-\nu}(z) &=& H^{(2)}_\nu(z)\exp\left(-\pi\nu\imath\right)
 * \f}.
 *
 * \copyright LGPL.
 */

class sp_Hankel : public sp_complexBessel
{
public:
    sp_Hankel(int _kind, double _order);

    /*! @name Accessor Functions */
    //@{
    int getKind(){return kind;}
    void setKind(int _kind){kind=_kind;}
    //@}

    complexd operator()(const complexd z);

protected:
    int kind;
};

#endif // SP_HANKEL_H
