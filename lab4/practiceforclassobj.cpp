#include<iostream>
using namespace std;
class student
{
    public:
    double gpa[100];
    int n;

};
int main()
{
    student ID;
    student n;
        cin >>ID.n;
    for(int i=0;i<ID.n;i++){
        cin >> ID.gpa[i];
    }
    for(int i=0;i<ID.n;i++){
        cout <<ID.gpa[i]<<'\n';
    }
  return 0;
}
