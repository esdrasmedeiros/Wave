#ifndef DDG_APPLICATION_H
#define DDG_APPLICATION_H

#include "Mesh.h"
#include "Real.h"
#include "DenseMatrix.h"
#include "SparseMatrix.h"
#include "DiscreteExteriorCalculus.h"

namespace DDG
{
   class Application
   {

       public:
           void run(const double step, Mesh& mesh)
           {
               SparseMatrix<Real> star0;
               HodgeStar0Form<Real>::build(mesh, star0);

               SparseMatrix<Real> star1;
               HodgeStar1Form<Real>::build(mesh, star1);

               SparseMatrix<Real> d0;
               ExteriorDerivative0Form<Real>::build(mesh, d0);


           }
       //
      // TODO: add your code here!!!
   	  //
   };
}

#endif
