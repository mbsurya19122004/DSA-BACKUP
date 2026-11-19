#include <iostream>
#include <vector>
using namespace std;

bool exp(vector<long long>&arr,int s,int x,long long ans,int i){
	if(i==s && ans ==x){
		return true;
	}
	if(i==s && ans!=x){
		return false;
	}
	return exp(arr,s,x,ans+arr[i],i+1) ||exp(arr,s,x,ans-arr[i],i+1);
}

int main(){
	int n,x;
	cin>>n>>x;
	vector<long long>arr;
	for(int i=0;i<n;i++){
		long long t;
		cin>>t;
		arr.push_back(t);
	}
	if(exp(arr,n,x,arr[0],1)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}