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

    Dvector& operator+=(double nb);
    Dvector& operator+=(const Dvector &d);
    Dvector& operator-=(double nb);
    Dvector& operator-=(const Dvector &d);
    Dvector& operator*=(double nb);
    Dvector& operator*=(const Dvector &d);
    Dvector& operator/=(double nb);
    Dvector& operator/=(const Dvector &d);

    bool operator==(const Dvector &d);

    void display(std::ostream& str);
    int size() const;
    void fillRandomly();
    double &element(const int &i) const;
};

Dvector operator+(const Dvector &d, double nb);
Dvector operator-(const Dvector &d, double nb);
Dvector operator*(const Dvector &d, double nb);
Dvector operator/(const Dvector &d, double nb);
Dvector operator+(const Dvector &d, const Dvector &v);
Dvector operator-(const Dvector &d, const Dvector &p);
Dvector operator-(const Dvector &d);

std::ostream &operator<<(std::ostream &out, const Dvector &d);
std::istream &operator>>(std::istream &in, const Dvector &d);

#endif
