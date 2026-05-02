//Even Numbers
//Print all even numbers from 1 to n 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
        }
        
    }
}