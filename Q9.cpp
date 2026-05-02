//Palindrome Number
#include<iostream>
using namespace std;
int main(){
    int n,ld;
    int r=0;
    cout<<"Enter your number:";
    cin>>n;
    int temp=n;
    int i=1;
    while (n!=0)
    {
        ld=n%10;
        r=r*10+ld;
        n=n/10;
    }
    if (temp==r)
    {
       cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}