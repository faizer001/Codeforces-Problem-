#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y;
    for(int i=1; i<=5; i++)
        for(int j=1; j<=5; j++)
        {
            int now;
            cin>>now;
            if(now)x=i,y=j;
        }
    cout<<fabs(x-3)+fabs(y-3);
}

