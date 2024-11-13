// calculte squre
#include<iostream>
using namespace std;
class A{
int n;
public:
void input(){
    cout<<"Enter the value of N"<<endl;
    cin>>n;
}
void output(){
    n=n*n;
    cout<<"Squre of NUmber =";
    cout<<n;
}
};
int main(){
A obj;
obj.input();
obj.output();
return 0;
}