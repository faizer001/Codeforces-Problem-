#include<iostream>
using namespace std;
int main()
{
    int m,n,fact1=1,fact2=1,finalans=0,k;
    cin>>k;
     for(int i=1;i<=k;i++){
    cin>>m>>n;
    for(int i=m;i>=1;i--)
    {
     fact1=fact1*i;
    }
    for(int i=n;i>=1;i--)
    {
        fact2=fact2*i;
    }
       finalans=fact1+fact2;

     }

    return 0;
}
