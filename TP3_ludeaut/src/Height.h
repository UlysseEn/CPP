#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Dvector.h"

#ifndef HeightH
#define HeightH

class Height
{
  private :
    int Lx;
    int Ly;
    Dvector dVectX;
    Dvector dVectY;
  public :
    Height();
    Height(const Height &h);
    Height(int Lx, int Ly, Dvector dVectX, Dvector dVectY);
    // Height(const Height &&h);
    ~Height();

    Height & operator=(const Height &h);
    Height & operator=(Height &&h);

    void display(std::ostream& str);
};

#endif
