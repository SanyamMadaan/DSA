#include<iostream>
using namespace std;

int Calculate(int arr[],int n){

	static int sum=0;

	//base case
	if(n==0) return sum;

	//processing
	sum+=arr[0];

	//recursive call
	return Calculate(arr+1,n-1);
}

int main(){
	int arr[]={4,2,3,1,0};
	int n=sizeof(arr)/sizeof(int);
	int sum=0;

	int ans=Calculate(arr,n);

	cout<<ans;
}