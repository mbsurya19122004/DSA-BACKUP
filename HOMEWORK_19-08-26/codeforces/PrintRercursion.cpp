#include <iostream>
using namespace std;

void PrintRecursion(int n){
	if(n==0)return;
	cout<<"I love Recursion"<<endl;
	PrintRecursion(n-1);
}

int main(){
	int n;
	cin>>n;
	PrintRecursion(n);
	return 0;
}