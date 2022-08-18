#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int X[N],maxx=0;
    if(1<=N&&N<=1000)
    for (int i=0;i<N;i++){
        cin>>X[i];
        if(0<=X[i]&&X[i]<=1000000000)
        if(maxx<X[i]){
            maxx=X[i];
        }
    }
    cout <<maxx<<'\n';
    return 0;
}
