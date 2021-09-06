#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check whether it is prime or not?";
    cin>>n;
    int i;
    int flag;
    for(i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            flag=-1;
            break;
        }
    }
    if(flag==-1)
        cout<<"Not Prime";
    else
        cout<<"Prime";
    return 0;
}
