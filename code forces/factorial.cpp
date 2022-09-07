#include<iostream>
using namespace std;
int main()
{
    int f,n;
    cin>>n;
    while(n--){
    cin>>f;
    int ans=1;
    for(int i=1; i<=f; i++)
    {
        ans=i*ans;
    }
      cout<<ans<<endl;
    }


    return 0;
}
