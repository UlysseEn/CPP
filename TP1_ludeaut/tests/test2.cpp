#include<cstdio>
#include<sstream>
#include<assert.h>
#include "../src/Dvector.cpp"

int main()
{
    std::cout<<"Test constructeur par copie :\n";
    Dvector v = Dvector(3, 2.5);
    assert(v.size() == 3);
    std::stringstream str;
    v.display(str);
    assert( str.str()=="2.5\n2.5\n2.5\n");
    std::cout<<"OK\n";
}
