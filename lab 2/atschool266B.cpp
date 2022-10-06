#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string a;
	cin>>a;
	while(m>0)
	{
		for(int i=0;i<a.length()-1;i++)
		{
			if(a[i]=='B'&&a[i+1]=='G')
			{
				a[i]='G';
				a[i+1]='B';
				i++;
			}
		}
		m--;
	}
	cout<<a<<endl;
}

