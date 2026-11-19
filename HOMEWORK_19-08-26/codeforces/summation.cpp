#include <iostream>
using namespace std;

long long sum(int arr[],int i,int n){
	if(i==n){
		return 0;
	}
	return arr[i]+sum(arr,i+1,n);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long ans=sum(arr,0,n);
	cout<<ans;
	return 0;
}