#include<iostream>
// #include<iomanip>
#include<cstdlib>
#include<ctime>

#ifndef DvectorH
#define DvectorH

class Dvector
{
  private :
    double *dVect;
  public :
    int sizeVect;
    Dvector();
    Dvector(int sizeVect, double init=0);
    Dvector(const Dvector &d);
    Dvector(std::string str);
    ~Dvector();
    void display(std::ostream& str);
    int size();
    void fillRandomly();
};

#endif
