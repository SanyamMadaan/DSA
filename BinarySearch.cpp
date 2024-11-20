#include<iostream>
using namespace std;

void BinarySearch(int arr[],int key,int start,int end){

	//base case
	if(start>end){
		cout<<key<<" not found in array";
		return;
	}

	//processing
	int mid=(start+end)/2;

	if(arr[mid]==key){
		cout<<key<<" founded at index"<<mid;
		return;
	}
	else if(arr[mid]>key){
		//recursive call
		BinarySearch(arr,key,start,mid-1);
	}
	else{
		//recursive call
		BinarySearch(arr,key,mid+1,end);
	}
}

int main(){
	int arr[]={2,4,6,8,10};
	int n=sizeof(arr)/sizeof(int);

	int key;

	cout<<"Enter key";
	cin>>key;

	int s=0,e=n-1;
	BinarySearch(arr,key,s,e);
}