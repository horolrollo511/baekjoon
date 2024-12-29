#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;
	int cnt=0;
	
	getline(cin,s);
	
	for(int i=0;i<s.length();i++)
		if(s[i]!=32 && (s[i+1]==32 || s[i+1]==0)) 
			cnt++;
	
	cout << cnt;
	
	return 0;
}