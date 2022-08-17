#include<iostream>
using namespace std;
int main()
{
    double X,Y;
    cin >> X>>Y;
    if ((-1000<=X&&X<=1000)&&(-1000<=Y&&Y<=1000))
    if(X>0&&Y>0){
        cout <<"Q1"<<'\n';
    }
    else if (X>0&&Y<0){
        cout <<"Q4"<<'\n';
    }
    else if (X<0&&Y>0)
    {
        cout <<"Q2"<<'\n';
    }
    else if (X==0.0&&(Y>0||Y<0)){
        cout <<"Eixo Y"<<'\n';
    }
    else if ((X>0||X<0)&&Y==0.0){
        cout <<"Eixo X"<<'\n';
    }
    else if (X==0.0&&Y==0.0){
        cout<<"Origem"<<'\n';
    }
    else {
        cout <<"Q3"<<'\n';
    }
    return 0;
}
