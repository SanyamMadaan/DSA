#include<iostream>
using namespace std;

void print(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	cout<<endl;
}

int findPivotIndex(int *a,int s,int e){
	int pivot=a[s];

	//count elemenst less then pivot toward right
	int cnt=0;
	for(int i=s+1;i<=e;i++){
		if(a[i]<pivot) cnt++;
	}

	//calculate right element for number
	int pivotIndex=s+cnt;

	swap(a[s],a[pivotIndex]);

	//check if all elements before pivot index is smaller and all after are greater;
	int i=s,j=e;

	while(i<pivotIndex && j>pivotIndex){
		while(a[i]<pivot) i++;
		while(a[j]>pivot) j--;
		if(i<pivotIndex && j>pivotIndex) swap(a[i++],a[j--]);
	}

	return pivotIndex;

}

void QuickSort(int *a,int s,int e){
	//base case
	if(s>=e) return;

	int pivotIndex=findPivotIndex(a,s,e);

	//recursive case
	QuickSort(a,s,pivotIndex-1);
	QuickSort(a,pivotIndex+1,e);
}

int main(){
	int a[]={1,2,1,0,-9,57,3,22};
	int n=sizeof(a)/sizeof(int);

    print(a,n);

	QuickSort(a,0,n-1);

	print(a,n);
}