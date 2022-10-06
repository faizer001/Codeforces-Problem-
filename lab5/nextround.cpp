#include<iostream>
using namespace std;
int main(){
	int n,k,j,x=0;
	cin>>n>>k;
	int arr[10000];
	for(int i=1;i<=n;i++){
		cin>>arr[i];

	}
	j=arr[k];
	for(int i=1;i<=n;i++){
		if(arr[i]>=j && arr[i]>0){
		x++;}
	}
     cout<<x;
}
