#include <iostream>

using namespace std;

int main()
{
 int size,arr1[],arr2[],add[];
 int i;
 cout<<"\n please enter the Array size  = ";
 cin>>size;
 cout<<"\n please enter the first Array items = ";
 for(i=0;i<size;i++){
    cin>>arr1[i];
 }
 cout<<"\n please enter the second Array items = ";
 for(i=0;i<size;i++){
  cin>>arr2[i];
 }
 for(i=0;i<size;i++){
    add[i] = arr1[i]+arr2[i];
    cout<<arr1[i]<<"+"<<arr2[i]<<add[i]<<"\n";
 }
   cout<<"\n the final Added result show Array:";
   for(i=0;i<size;i++){
    cout<<add[i]<<" ";
   }
   return 0;
}
