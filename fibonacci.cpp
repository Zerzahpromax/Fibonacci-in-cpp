#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENter a number";
    cin>>a;
    int x[a];
    x[0]=0;
    x[1]=1;
    cout<<x[0]<<x[1];
    for(int i=2 ; i<a ; i++)
    {
        x[i]=x[i-1]+x[i-2];
        cout<<x[i];
    }
}