#include <iostream>
#include <iomanip>
using namespace std;

long long avg(int arr[],int i,int n){
	if(i==n){
		return 0;
	}
	return arr[i]+avg(arr,i+1,n);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	double result=(double)avg(arr,0,n) /n;
	cout<<fixed<<setprecision(6)<<result;
	return 0;
}