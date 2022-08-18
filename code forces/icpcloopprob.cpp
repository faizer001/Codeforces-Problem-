#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;



    int X[N], evcnt=0,oddcnt=0,ps=0,neg=0;
  if (1<=N&&N<=1000)
       for (int i=0; i<N; i++)
    {
        cin >> X[i];
         if(-100000<=X[i]&&X[i]<=100000)

        if(X[i]%2==0)
        {
            evcnt++;
        }
        if(X[i]%2!=0)
        {
            oddcnt++;
        }
        if (X[i]>0)
        {
            ps++;
        }
        if(X[i]<0)
        {
            neg++;
        }
    }

    cout <<"Even: "<< evcnt<<'\n'<<"Odd: "<<oddcnt<<'\n'<<"Positive: "<<ps<<'\n'<<"Negative: " <<neg<<'\n' ;
    return 0;
}
