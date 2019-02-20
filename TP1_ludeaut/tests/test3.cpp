#include<cstdio>
#include<sstream>
#include<assert.h>
#include "../src/Dvector.cpp"

int main()
{
    std::cout<<"Test constructeur par défaut :\n";
    Dvector v;
    assert(v.size() == 0);
    std::stringstream str;
    v.display(str);
    assert( str.str()=="");
    std::cout<<"OK\n";
}
