#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which you want even numbers: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
        
}