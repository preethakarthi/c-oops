#include<iostream>
using namespace std;
int main()
{
    int r,n,t,sum=0;
    cout<<"enter 3 digit number";
    cin>>n;
    t=n;
    while(t!=0)
    {
        r=t%10;
        sum=sum+(r*r*r);
        t=t/10;
    }
    if(n==sum)
    {
        cout<<n<<"is amstrong no";
    }
    else
    {
        cout<<n<<"is not amstrong no";
    }
    return 0;
}
