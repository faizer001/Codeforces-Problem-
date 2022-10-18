//faizar01
//problem :236A
#include<bits/stdc++.h>
using namespace std;
int main()
{  char x;
  set<char> s;
  while(cin>>x)
    {s.insert(x);}

  cout<<(s.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");

}

