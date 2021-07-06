#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"Enter the number ofrow to show the number pattern:";
    cin>>n;
    for(x=0;x<=n;x++){
        for(y=0;y<=n;y++){
            if(y<=x)
                cout<<y;
                else
                    cout<<" ";
        }
        for(y = n; y >= 1; y--){
            if(y <= x)
            cout << y;
            else
            cout << " ";
        }
        cout << "\n";

        }
        return 0;
}
