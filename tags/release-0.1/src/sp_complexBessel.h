#ifndef SP_COMPLEXBESSEL_H
#define SP_COMPLEXBESSEL_H

#define pi 3.141592653589793238462643383279502884e+00

#include <complex>

#include "fortranLinkage.h"

using namespace std;
typedef complex<double> complexd;

/*! \author Joey Dumont <joey.dumont@gmail.com>
 * \author Denis Gagnon <gagnon88@gmail.com>
 *
 * \date 2012-09-06
 *
 *  \brief Abstract class that defines generic functionality
 * for Bessel functions.
 *
 * In short, we define a function that behaves like a mathematical
 * function. It takes a complex number and returns a complex number.
 *
 * \copyright LGPL.
 */

class sp_complexBessel
{
public:
    sp_complexBessel(double _order);

    /*! @name Accessor Fucntions */
    //@{
    double getOrder(){return order;}
    void setOrder(double _order){order=_order;}
    //@}

    /*! Function prototype */
    virtual complexd operator()(const complexd z) = 0;

protected:
    /*! Order of the function. */
    double order;
};

#endif // SP_COMPLEX_H
