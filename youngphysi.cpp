#include<iostream>
using namespace std;
int main()
{
    int N,X=0,Y=0,Z=0;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        X=X+x;
        Y=Y+y;
        Z=Z+z;
    }
    if(!(X) && !(Y) && !(Z))
    {
        cout<<"YES";
    }
    else if(X!=0 || Y!=0 || Z!=0)
    {
        cout<<"NO";
    }
}

