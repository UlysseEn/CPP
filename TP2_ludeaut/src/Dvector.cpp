#include<iostream>
#include<fstream>
#include<iostream>
#include<limits>
#include<cstdio>
#include<cstring>
#include "Dvector.h"

Dvector::Dvector()
{
  sizeVect = 0;
  dVect = new double[sizeVect];
  return ;
}

Dvector::Dvector(int s, double init)
{
  sizeVect = s;
  if(sizeVect == 0) return ;
  dVect = new double[sizeVect];
  for(int i = 0 ; i < sizeVect ; i++) dVect[i] = init;
}

Dvector::Dvector(const Dvector &d)
{
  sizeVect = d.sizeVect;
  if(sizeVect == 0) return ;
  dVect = new double[sizeVect];
  for(int i = 0 ; i < sizeVect ; i++) dVect[i] = d.dVect[i];

}
Dvector::Dvector(std::string fichier)
{
  std::ifstream f(fichier.c_str());
  if(f)
  {
    std::string line("");
    int lines = 0;
    while (std::getline(f, line))
    {
      ++lines;
    }
    sizeVect = lines;
    f.close();
    std::ifstream f(fichier.c_str());
    int i = 0;
    dVect = new double[sizeVect];
    while(std::getline(f, line))
    {
        dVect[i] = atof(line.c_str());
        i++;
    }
  }
  else
  {
    sizeVect = 0, dVect = new double[sizeVect];
  }
}

Dvector::~Dvector()
{
  delete [] dVect;
}

Dvector& Dvector::operator=(const Dvector &d)
{
  sizeVect = d.sizeVect;
  dVect = new double[sizeVect];
  memcpy(dVect, d.dVect, sizeVect*sizeof(double));

  return *this;
}

Dvector& Dvector::operator=(Dvector &&d)
{
  std::swap(sizeVect, d.sizeVect);
  std::swap(dVect, d.dVect);
  return *this;
}

Dvector& Dvector::operator+=(double nb)
{
  for(int i =0; i < sizeVect;i++) dVect[i] += nb;
  return *this;
}

Dvector& Dvector::operator+=(const Dvector &d)
{
  try {
    if(sizeVect != d.sizeVect) throw std::string("Addition impossible : Vecteurs de taille différente !\n");
    for(int i =0; i < sizeVect;i++) dVect[i] += d.dVect[i];
  } catch(std::string const& chaine)
  {
    std::cerr << chaine;
  }
  return *this;
}

Dvector& Dvector::operator-=(double nb)
{
  for(int i =0; i < sizeVect;i++) dVect[i] -= nb;
  return *this;
}

Dvector& Dvector::operator-=(const Dvector &d)
{
  try {
    if(sizeVect != d.sizeVect) throw std::string("Soustraction impossible : Vecteurs de taille différente !\n");
    for(int i =0; i < sizeVect;i++) dVect[i] -= d.dVect[i];
  } catch(std::string const& chaine)
  {
    std::cerr << chaine;
  }
  return *this;
}

Dvector& Dvector::operator*=(double nb)
{
  for(int i =0; i < sizeVect;i++) dVect[i] *= nb;
  return *this;
}

Dvector& Dvector::operator*=(const Dvector &d)
{
  try {
    if(sizeVect != d.sizeVect) throw std::string("Multiplication impossible : Vecteurs de taille différente !\n");
    for(int i =0; i < sizeVect;i++) dVect[i] *= d.dVect[i];
  } catch(std::string const& chaine)
  {
    std::cerr << chaine;
  }
  return *this;
}

Dvector& Dvector::operator/=(double nb)
{
  for(int i =0; i < sizeVect;i++) dVect[i] /= nb;
  return *this;
}

Dvector& Dvector::operator/=(const Dvector &d)
{
  try {
    if(sizeVect != d.sizeVect) throw std::string("Addition division : Vecteurs de taille différente !\n");
    for(int i =0; i < sizeVect;i++) dVect[i] /= d.dVect[i];
  } catch(std::string const& chaine)
  {
    std::cerr << chaine;
  }
  return *this;
}

bool Dvector::operator==(const Dvector &d)
{
  if(size() != d.size()) return false;
  for(int i=0; i < size(); i++){
    if(dVect[i] != d(i)) return false;
  }
  return true;
}

Dvector operator+(const Dvector &d, double nb)
{
  Dvector v(d);
  v+=nb;
  return v;
}

Dvector operator-(const Dvector &d, double nb)
{
  Dvector v(d);
  v-=nb;
  return v;
}

Dvector operator*(const Dvector &d, double nb)
{
  Dvector v(d);
  v*=nb;
  return v;
}

Dvector operator/(const Dvector &d, double nb)
{
  Dvector v(d);
  v/=nb;
  return v;
}

Dvector operator+(const Dvector &d, const Dvector &p)
{
  Dvector v(d);
  v+=p;
  return v;
}

Dvector operator-(const Dvector &d, const Dvector &p)
{
  Dvector v(d);
  v-=p;
  return v;
}

Dvector operator-(const Dvector &d)
{
  Dvector v(d.size());
  for(int i =0; i < d.size();i++) v(i) = -d(i);
  return v;
}

std::ostream &operator<<(std::ostream &out, const Dvector &d)
{
  out << "Dvector : ";
  for(int i =0; i < d.size();i++) out << d(i) << " ";
  out << "\n";
  return out;
}

std::istream &operator>>(std::istream &in, const Dvector &d)
{
  for(int i =0; i < d.size();i++) in >> d(i);
  return in;
}

int Dvector::size() const
{
    return sizeVect;
}

double &Dvector::operator()(const int &i)
{
    return dVect[i];
}

double Dvector::operator()(const int &i) const
{
    return dVect[i];
}

void Dvector::display(std::ostream& str)
{
    for(int i = 0 ; i < sizeVect ; i++) str<<dVect[i]<<"\n";
}

void Dvector::fillRandomly()
{
    srand(time(NULL));
    for(int i = 0 ; i < sizeVect ; i++) dVect[i] = rand()/(double)RAND_MAX;
}

Dvector Dvector::resize(int s, double nb)
{
    if(s == size()) return *this;
    Dvector d(s);
    if(s < size()){
      for(int i=0; i<s; i++) d(i) = dVect[i];
    } else {
      for(int i=0; i<size(); i++) d(i) = dVect[i];
      for(int j=size(); j<s; j++) d(j) = nb;
    }
    *this = d;
    return *this;
}
