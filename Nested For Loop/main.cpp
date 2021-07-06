#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for( int num = a; num<=b; num++){
        int isNotPrime = 0;
        for(int i=2; i<num; i++){
            if(num%i==0){
                isNotPrime = 1;
                break;
            }
        }

        if(isNotPrime == 0){
            cout<<num<<endl;
        }

    }
    return 0;
}
