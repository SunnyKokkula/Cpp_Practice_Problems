#include <iostream>

using namespace std;

class LS
{
public:
    void LinearSearch( int arr[], int value,int i,int n)
{
    int found=0;
    for(i=0; i<n; n++)
    {
        if(value==arr[i])
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {

    cout<<"element present in the Array at that position"<<i+1;
    }
    else
    {
      cout<<"element is not present in the array";

    }
}

int main(){
    int num;
    int i,keynum,found=0;
    cin>>num;
    int arr[25];
    cout<<"enter the element:\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be search";
    cin>>keynum;
    LS l1;
    l1.LinearSearch(arr,keynum,i,num);
    return 0;
}
};
