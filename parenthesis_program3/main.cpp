#include <iostream>

using namespace std;
class paren{
public:
 int top;
 char A[50];
 paren();
 void push(char item);
 char pop();
 int full();
 int empty();
};
paren::paren(){
 top=-1;
}
int paren::full(){
 if(top==49){
 return 1;
 }else{
 return 0;
 }
}
void paren::push(char item){
 if(full()){
 cout<<"Overfull";
 }else{
 top=top+1;
 A[top]=item;
 }
}
int paren::empty(){
 if(top==-1){
 return 1;
 }else{
 return 0;
 }
}
char paren::pop(){
 if(empty()){
 cout<<"Underflow\n";
 }else{
 return A[top--];
 }
}
int main(){
 paren p;
 char exp[50],temp;
 int i,valid=1;
 cout << "Sannithu bhumesh kokkula roll no:25\n ";
 cout<<"Enter Expression\n";
 cin>>exp;
 if(exp[i]=='('){
 p.push(exp[i]);
 }
 if(exp[i]==')'){
 if(p.top==-1){
 valid=0;
 }else{
 temp=p.pop();
 }
 }
 if(exp[i]==')' && temp=='('){
 valid=1;
 }
 }
 if(p.top>=0){
 valid=0;
 }
 if(valid==1){
 cout<<"Valid Expression\n";
 }else{
 cout<<"Invalid Expression\n";
 }
}
