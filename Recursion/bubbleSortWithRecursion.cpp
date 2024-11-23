#include<iostream>
using namespace std;

void Print(int *arr,int size){
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}

void Solve(int *arr,int n){
	//base case
	if(n==0 || n==1) return;

	//processing
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
	}

	//recursive call
	Solve(arr,n-1);
}

int main(){
	int arr[]={5,4,-1,0,8,4};
	int n=sizeof(arr)/sizeof(int);

	cout<<"Before sorted"<<endl;
	Print(arr,n);

	Solve(arr,n);

	cout<<"After Sorted"<<endl;
	Print(arr,n);
}