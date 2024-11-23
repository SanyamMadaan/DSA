#include<bits/stdc++.h>
using namespace std;

void Print(int *arr,int size){
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}

void Solve(int *arr,int n){
	//base case
	if(n==0 || n==1) return;

	//processing
	int min=INT_MAX;
	int index=-1;
	int i=0;

	for(i=0;i<n;i++){
		if(arr[i]<min){
		   min=arr[i];
		   index=i;	
		} 
	}

	if(index!=-1) swap(arr[index],arr[0]);

	//recursive case
	Solve(arr+1,n-1);
}

int main(){
	int arr[]={5,4,-1,0,8,4};
	int n=sizeof(arr)/sizeof(int);

	cout<<"Solved using selection sort"<<endl;

	cout<<"Before sorted"<<endl;
	Print(arr,n);

	Solve(arr,n);

	cout<<"After Sorted"<<endl;
	Print(arr,n);
}