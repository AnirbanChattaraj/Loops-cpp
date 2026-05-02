//Count Digits
#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter your number:";
    cin>>n;
    int i=1;
    while (n!=0)
    {
        n=n/10;
        count++;
        i++;
    }
    
    cout<<count;
}