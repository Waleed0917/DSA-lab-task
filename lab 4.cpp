#include<iostream>
using namespace std;
class stack
{
int top;
int arrary[12];
public:
int stack()
{top = -1}
void push (int x)
{
if (top >= 12){
cout<<"stack overloded"<<endl;
return;
}
arr[++top]=x;
cout<<x<<endl;
}
void pop(){
if (top<0){
cout<<"under flow"<<endl;
return;
}
cout<<arr[top--]<<endl;
}
int peek(){
if(top<0){
cout<<"-1"<<endl;
return;
}
return arr[top] ;
}
bool empty (){
return (top,0);
}
};
int main ()
{
stack s;
s.push(53);
s.push(52);
s.push(56);
cout<<"top element is "<<s.peek<<endl;
s.pop();
cout<<"top element after pop is "<<s.peek<<endl;
if (s.empty()){
cout<<"empty"<<endl;
}
else{cout<<" stack is not empty";
}
return 0;
}
