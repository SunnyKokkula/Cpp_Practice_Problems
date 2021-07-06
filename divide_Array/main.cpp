#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,4,6,7,8};
    int k;
    cout<<"enter the value";
    cin>>k;
    for( int i=0;i<5;i++){
        if(a[i]/k ==0){
            cout<<"element is divisible by k \n";
        }
            else{
                cout<<"element is not divisible k \n";
            }

    }

    return 0;
}
