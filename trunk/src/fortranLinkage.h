/*! \file fortranLinkage.h
 *
 * \author Joey Dumont <joey.dumont@gmail.com>
 * \author Denis Gagnon <gagnon88@gmail.com>
 *
 * \brief Specifies the linkage to the Fortran subroutines
 * for the Bessel functions of complex argument.
 *
 * We use the Fortran code developed by D.E. Amos \cite AMO86
 * to compute the Bessel, Hankel and Airy functions of complex arguments
 * and real order. Only positive arguments are supported in Amos' code,
 * but we implement them using the reflection formulae.
 *
 * For real arguments of the Bessel functions, we recommend
 * using the Boost libraries, which are faster for double
 * return value and argument.
 *
 * \copyright LGPL
 */

#ifndef FORTRANLINKAGE_H
#define FORTRANLINKAGE_H

extern "C"
{
/*! Bessel function of the first kind. */
extern void zbesj_(double*,double*,double*,int*,int*,double*,double*,int*,int*);

/*! Bessel function of the second kind. */
extern void zbesy_(double*,double*,double*,int*,int*,double*,double*,int*, double*,double*,int*);

/*! Modified Bessel function of the first kind. */
extern void zbesi_(double*,double*,double*,int*,int*,double*,double*,int*,int*);

/*! Modified Bessel function of the second kind. */
extern void zbesk_(double*,double*,double*,int*,int*,double*,double*,int*,int*);

/*! Hankel function of both kinds. Kind determined by integer argument. */
extern void zbesh_(double*,double*,double*,int*,int*,int*,double*,double*,int*,int*);

/*! Airy function of the first kind. */
extern void zairy_(double*,double*,int*,int*,double*,double*,int*,int*);

/*! Airy function of the second kind. */
extern void zbiry_(double*,double*,int*,int*,double*,double*,int*);
}

#endif // FORTRANLINKAGE_H
