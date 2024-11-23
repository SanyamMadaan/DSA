#include<iostream>
using namespace std;

void Print(int *arr,int size){
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
	cout<<endl;
}

void Solve(int *arr,int n){
	for(int i=1;i<n;i++){
		int j=i;
		while(arr[j]<arr[j-1] && j!=0){
			swap(arr[j],arr[j-1]);
			j--;
		}
	}
}

void SolveUsingRecursion(int *arr,int n){
	static int index=1;
	
	//base case
	if(index==n) return;
    
    //processing
	int j=index;

	while(j!=0 && arr[j]<arr[j-1]){
		swap(arr[j],arr[j-1]);
		j--;
	}

	index++;

    //recursive case
	SolveUsingRecursion(arr,n);

}

int main(){
	int arr[]={0,-1,-1,-1,-1,-1};
	int n=sizeof(arr)/sizeof(int);

    cout<<"Solved using insertion Sort"<<endl;
	cout<<"Before sorted"<<endl;
	Print(arr,n);

	SolveUsingRecursion(arr,n);

	cout<<"After Sorted"<<endl;
	Print(arr,n);
}