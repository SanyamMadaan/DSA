#include<iostream>
#include<vector>
using namespace std;

vector<int>merge(int* a,int*b,int s1,int s2){
	vector<int>result;
	int i=0,j=0;

	while(i<s1 && j<s2){
		if(a[i]<b[j]){
			result.push_back(a[i++]);
		}
		else{
			result.push_back(b[j++]);
		}
	}

    //first array still contains elements
	if(i<s1){
		while(i<s1){
			result.push_back(a[i++]);
		}
	}

    //second array contains elements
	if(j<s2){
		while(j<s2){
			result.push_back(b[j++]);
		}
	}

	return result;
}

void Print(vector<int> a){
	for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int a1[]={1,3,5,7,9};
	int a2[]={0,2,4,6,8};

	vector<int>a3=merge(a1,a2,5,5);

	Print(a3);
}