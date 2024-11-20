#include<iostream>
using namespace std;

bool LinearSearch(int *arr,int n,int key){

    static int i=0;

    //base case
	if(i==n) return false;


	if(arr[i++]==key) return true;

	return LinearSearch(arr,n,key);
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);

	int key;

	cout<<"Enter Key : ";
	cin>>key;

	bool ans=LinearSearch(arr,n,key);

	(ans)?cout<<"Found" :cout<<"Not Found";
}