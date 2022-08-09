//Code forces problem no:231A
//Problem name :team


#include<iostream>
using namespace std;
int main()
{
    int p,v,t,n,cnt=0;
    cin >> n;
    if (1<=n&&n<=1000){
    for (int i=0;i<n ;i++)
    {
        cin >> p >> v >> t;
        if ((p==1&&v==1)||(p==1&&t==1)||(v==1&&t==1)||(p==1&&v==1&&t==1)){
            cnt++;
        }

    }
    }
    cout << cnt << '\n';
    return 0;
}
