#include <iostream>
using namespace std;
bool check(int left, int right,int arr[]){
	if(left>=right)return true;
	if(arr[left]!=arr[right])return false;
	return check(left+1,right-1,arr);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(check(0,n-1,arr)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
return 0;
}