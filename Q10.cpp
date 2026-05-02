//Sum of Digits
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0,ld=0;
    cout<<"Enter your number:";
    cin>>n;
    int i=1;
    while (n!=0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
        i++;
    }
    cout<<sum;
}