#include <iostream>

using namespace std;

int main()
{
    int a[] ={1,4,7,8,5};
    int i,sum=0;
    int prod = 1;
    for(i=0;i<5;i++){
        sum = sum + a[i];
        prod = prod * a[i];
    }

    cout << sum;
    cout << prod;
    return 0;

}
