#include<cstdio>
#include<sstream>
#include<assert.h>
#include "../src/Dvector.cpp"

int main()
{
    std::cout<<"Test constructeur avec arguments (avec ou sans valeur initiale) :\n";
    Dvector v(3, 2.5);
    assert(v.size() == 3);
    std::stringstream str;
    v.display(str);
    assert(str.str()=="2.5\n2.5\n2.5\n");
    Dvector d(3);
    assert(d.size() == 3);
    std::stringstream str1;
    d.display(str1);
    assert(str1.str()=="0\n0\n0\n");
    std::cout<<"OK\n";
}
