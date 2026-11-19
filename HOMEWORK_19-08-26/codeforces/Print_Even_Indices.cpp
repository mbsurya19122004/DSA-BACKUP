#include <iostream>
using namespace std;

void Print_Even_Indices(int n,int arr[]){
	if(n<0) return;
	cout<<arr[n];
	if(n>=2)cout<<" ";
	Print_Even_Indices(n-2,arr);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++) {
        	cin >> arr[i];
    	}
	n--;
	if(n%2==1)n--;
	Print_Even_Indices(n,arr);
	return 0;
}
	 