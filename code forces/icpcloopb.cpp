#include<iostream>
using namespace std;
int main()
{
    int N;cin >>N;
    if (1<=N&&N<=1000){
        for (int i=1;i<=N;i++){
            if (i%2==0){
              cout <<i<<'\n';

            }
            else if(N==1){
                cout <<"-1"<<'\n';
            }

    }



    }
    return 0;
}
