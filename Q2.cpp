// Write a program to print all even numbers between 1 to N
#include<iostream>
using namespace std;
class N{
    int n;
public:
void getdata(){
cout<<"Enter the value of N:";
cin>>n;
}
void output(){
    cout<<"Your All even Number :";
    for(int i=1;i<=n;i++){
        if(i%2==0){
        cout<<i<<endl;
        }
    }
}
};
int main(){

N obj;
obj.getdata();
obj.output();
return 0;

}