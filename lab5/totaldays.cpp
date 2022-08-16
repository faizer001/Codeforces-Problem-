#include<iostream>
using namespace std;
int main()
{
    int N,y,m,d;
    cin >> N;
    if(0<=N&&N<=1000000)
    y=N/365;
    m=(N-(y*365))/30;
    d=N-(y*365)-(m*30);
    cout <<y<<" years\n"<<m<<" months\n"<<d<<" days\n";

    return 0;
}
