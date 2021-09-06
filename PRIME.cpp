#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check whether it is prime or not?";
    cin>>n;
    int i;
    int flag;
    vector<int> factors;
    for(i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            flag=-1;
            break;
        }
    }
    if(flag==-1)
    {
        cout<<"Not Prime ";
        for(i=1;i<=n;++i)
        {
            if(n%i==0)
                factors.push_back(i);
        }
    }
    else
    {    
        cout<<"Prime ";
        factors.push_back(1);
        factors.push_back(n);
    }
    for(auto it:factors)
    {
        cout<<it<<"  ";  
    }
        return 0;
}
