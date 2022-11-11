#include<ios>
#include<iostream>
using namespace std;
template <class T,class F>
T maximum(T first_num,F second_num){
return (first_num>second_num)?first_num:second_num;

}
int main()
{
    double a,b;
    cin>>a>>b;
    cout <<"The Maximum Num is:"<<maximum(a,b);
    return 0;
}
