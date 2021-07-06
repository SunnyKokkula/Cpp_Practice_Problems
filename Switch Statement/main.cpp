#include <iostream>

using namespace std;

int main()
{
    char button;
    cout<<"enter the input character"<<endl;
    cin>>button;
    switch(button){
        case 'a':
        cout<<"Hello"<<endl;
        break;
        case 'b':
        cout<<"Namaste"<<endl;
        break;
        case 'c':
        cout<<"Halo"<<endl;
        default:
            cout<<"I am still learnin!"<<endl;
            break;
    }
    return 0;

}
