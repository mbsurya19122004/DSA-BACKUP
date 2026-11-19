#include <iostream>
using namespace std;

long long sum(int arr[],int n,int i){
	if(n==0)return 0;
	return arr[i]+sum(arr,n-1,i-1);
}

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	long long ans=sum(arr,m,n-1);
	cout<<ans;
	return 0;
} 