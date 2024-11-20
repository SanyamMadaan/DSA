#include<iostream>
using namespace std;

// bool IsSorted(int *arr,int n){

// 	for(int i=0;i<n-1;i++){
		
// 		if(arr[i]> arr[i+1]){
// 		   cout<<arr[i]<<" is greater than "<<arr[i+1]<<endl;
// 		   return false ;	
// 		} 

// 		cout<<arr[i]<<" is smaller than "<<arr[i+1]<<endl;
// 	}

// 	return true;
// }  

bool IsSorted(int* arr,int size ){
    //base case
    if (size == 1 || size == 0) return true;

    //processing
    if (arr[0] > arr[1]) return 0;

    //recursive case
    return IsSorted(arr + 1, size - 1);
}


int main(){
	int arr[]={2,4,5,7,69,11,20};
	int n=sizeof(arr)/sizeof(int);

	bool ans=IsSorted(arr,n);

	cout<<"Solved using Recursion"<<endl;

	if(ans){
		cout<<"Given array is sorted";
	}
	else{
		cout<<"Gievn array is not sorted";
	}
	
	return 0;
}