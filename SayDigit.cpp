#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

//without Recursion
// void ReadInput(int no){
// 	vector<string>ans;
	
// 	static string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	
// 	while(no>0){
// 		int digit=no%10;
// 		ans.push_back(arr[digit]);
// 		no/=10;
// 	}

// 	for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";

// }

void SayDigit(int no){
	static string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	//base case
	if(no<=0) return;

	//processing
	int digit=no%10;
	no=no/10;

	//recursive case
	SayDigit(no);

	cout<<arr[digit]<<" ";
}

int main(){
	int no;
	cin>>no;

	SayDigit(no);
}