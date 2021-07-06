#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int original = n;
    while(n>0){
        int lastdigit = n%10;
        sum+= pow(lastdigit , 3);
        n = n/10;
    }
    if(sum==original){
        cout<<"the number is Amstrong"<<endl;
    }
    else{
        cout<<" the number is non- Amstrong"<<endl;
    }
    return 0;
}
