// write a program to calculate the sum of the first n natural number 
#include<iostream>
using namespace std;
class A{
int n;
int sum=1;
public:
void getdata(){
    cout<<"Enter the value of N :";
    cin>>n;
}
void putdata(){
    cout<<"addition of n natural number :"<<endl;
    for(int i=1;i<=n;i++){
       sum=sum+i;
    }
}
void output(){
    cout<<sum;
}


};
int main(){
A obj;
obj.getdata();
obj.putdata();
obj.output();
return 0;
}