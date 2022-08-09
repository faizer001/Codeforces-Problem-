#include<bits/stdc++.h>

using namespace std;
int main()
{
     double p,n,ans=0;cin >> n;
     if (1<=n&&n<=100){
     for(int i=0;i<n;i++){
        cin >> p;
        if(0<=p&&p<=100){
       ans=ans+p;
     }
     }

     cout<<fixed<<setprecision(12)<<ans/n<<'\n';
     }

    return 0;
}
