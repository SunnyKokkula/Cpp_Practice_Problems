#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int*ptr;
    ptr = a;
    ptr = ptr+1;
     std::cout <<"value of second element of an array : "  << *ptr<<std::endl;
    return 0;
}
