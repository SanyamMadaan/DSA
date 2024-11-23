#include<iostream>
#include<string>

using namespace std;

bool IsPalindrome(string s){
	static int end=s.size()-1;
	static int start=0;

	if(start>end) return true;

	if(s[start++]!=s[end--]) return false;

	IsPalindrome(s);
}

int main(){
	string s;
	cin>>s;

	bool ans=IsPalindrome(s);

	(ans)? cout<<s<<" is Palindrome" : cout<<s<<" is not Palindrome";
}