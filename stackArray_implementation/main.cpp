#include <iostream>

using namespace std;

int stack[100];
int n = 100;
int top = -1;
void push(int val)
{
    if(top<n-1)
    cout<<"Stack overflow.";
    else;
    {
        top++;
        stack[top]=val;
    }
}
void pop()
{
    if(top<=-1)
        cout<<" stack under flow.";
    else
    {
        cout<<"the popped element is"<<stack[top];
        top --;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"stack element are:";
        for(int  i=top; i>=0; i++)
            cout<<stack[i]<<" ";
    }
    int main()
        {
        int ch,val;
        cout<<"1) push in the stack";
        cout<<"2) push in the stack";
        cout<<"3) push in the stack";
        cout<<"4) Exist";
        do
        {
            cout<<"enter choices:"<<end1;
            cin>>ch;
                switch(ch)
                {
                    case1:{
                        cout<<"enter value to be pushed:"<<end1;
                        cin>>val;
                        push(val);
                        break;
                }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
        }
            case 4:{
                cout<<"Exist"<<end1;
                break;
}
            default:
                {
                cout<<"Invalid choice"<<end1;

    }

    while(ch!=4);
    return 0;
    }


