#include<iostream>
using namespace std;
class palindrome_number{
public:
int n,c,r,s=0;
void input(){
    cout<<"Enter the value of N"<<endl;
    cin>>n;
}
void condition(){
    c=n;
    while(n>0){
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
}
void output(){
    if(c==s){
        cout<<"Number of polindrome number :";
    }
    else{
        cout<<"Not polindrome NUmber:";
    }
}
};
int main(){
    palindrome_number obj;
    obj.input();
    obj.condition();
    obj.output();
    return 0;

}