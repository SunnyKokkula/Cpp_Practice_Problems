#include <iostream>

using namespace std;

int main()
{
    int a[] = {3,5,7,8,4};
    int i,j,temp;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[j]<a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
    }
    cout <<"Printing Sorted Element List ...\n";
    for(i = 0; i<5; i++)  {
        cout <<a[i]<<"\n";
    }
    return 0;
}
