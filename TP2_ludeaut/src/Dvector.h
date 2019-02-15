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
    int sizeVect;
  public :
    Dvector();
    Dvector(int sizeVect, double init=0);
    Dvector(const Dvector &d);
    Dvector(std::string str);
    ~Dvector();

    Dvector& operator=(const Dvector &d);
    Dvector& operator=(Dvector &&d);

    void display(std::ostream& str);
    int size();
    void fillRandomly();
    double element(const int &i);
};

#endif
