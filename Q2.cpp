//Sum of First N Numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter your number:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    cout<<sum;
}