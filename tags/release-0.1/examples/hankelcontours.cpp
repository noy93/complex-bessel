/* This example program generates the source data of the contour plot
 * seen in Abramowitz & Stegun's book on p. 359. The complex value
 * of the H_0(z) function of the first kind is computed in the
 * complex plane and the values are written into an external file
 * 
 * Joey Dumont <joey.dumont@gmail.com>
 * Denis Gagnon <gagnon88@gmail.com>
 * 
 */

#include <complex>
#include <iostream>
#include <fstream>
#include <complex_bessel.h>

using namespace std;

int main()
{

  sp_Hankel myHankel(1, 0.0);
  double X;
  double Y;
  complex<double> Z;
  ofstream outfile;
  outfile.open ("contours.dat");
  
  for (int idY = 0; idY < 100; idY ++)
  {

    for (int idX = 0; idX < 100; idX ++)
    {

    X = 6.0*idX/99.0 - 4.0;
    Y = 3.0*idY/99.0 - 1.5;
    
    Z = myHankel(complex<double>(X,Y) );
    
    outfile << X << " " << Y << " " << real(Z) << " " << imag(Z) << endl;

    }


  }

  return 0;

}
