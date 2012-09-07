#ifndef SP_AIRY_H
#define SP_AIRY_H

#include "sp_complexBessel.h"

/*! \author Joey Dumont <joey.dumont@gmail.com>
 *  \author Denis Gagnon <gagnon88@gmail.com>
 *
 * \date 2012-09-07
 *
 * \brief Computes both Airy functions and their first derivative.
 *
 * We use the Fortran subroutines ZAIRY and ZBIRY to compute the Airy functions
 * Ai(z) and Bi(z) and their first derivative. The function to be computed is determined
 * by the two integers kind and order. kind == 0 means Ai(z), kind ==1 means Bi(z).
 * order determines the order of the derivative. It can also be either 0 or 1.
 *
 * \copyright LGPL.
 */

class sp_airy
{
public:
    sp_airy(int _kind,int _order);

    /*! @name Accessor Functions */
    //@}
    int getKind(){return kind;}
    int getOrder(){return order;}
    void setKind(int _kind){kind=_kind;}
    void setOrder(int _order){order=_order;}
    //@}

    complexd operator()(const complexd z);

protected:
    int kind;
    int order;
};

#endif // SP_AIRY_H
