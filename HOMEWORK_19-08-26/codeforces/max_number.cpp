#include <iostream>
using namespace std;

void max_num(int arr[],int n,int i,int &ans){
	if(i==n){
		cout<<ans;
		return;
	}
	ans=max(ans,arr[i]);
	max_num(arr,n,i+1,ans);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=INT_MIN;
	max_num(arr,n,0,ans);
	return 0;
}