#include <iostream>
using namespace std;

void left_max(int arr[],int i,int left,int n){
	if(i==n){
		cout<<left;
		return ;
	}
	cout<<left<<" ";
	if(arr[i] >left){
		left=arr[i];
	}
	left_max(arr,i+1,left,n);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int left=arr[0];
	left_max(arr,1,left,n);
	return 0;
}