#include <iostream>

using namespace std;
int small(int[],int,int);
int main()
{
    int a[10] = {10,9,7,10,23,44,12,78,34,23};
    int i,j,k,pos,temp;
    for(i=0;i<10;i++){
        pos = small(a,10,i);
        temp = a[i];
        a[i] = a[pos];
        a[pos] =temp;
    }
    cout<<"\n printing sorted array...\n";
    for(i=0;i<10;i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}
int small(int a[],int n,int i)
{
    int small,pos,j;
    small = a[i];
    pos = i;
    for(j=i+1;j<10;j++){
        if(a[j]<small){
            small = a[j];
            pos = j;
        }
    }
    return pos;
}
