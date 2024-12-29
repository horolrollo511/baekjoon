#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;
	
	cin >> s;
	
	for(int i=97;i<=122;i++) {
		int j;
		
		for(j=0;j<s.length();j++) {
			if(s[j]==i) {
				cout << j << " ";
				break;
			}
		}
		
		if(j==s.length())
			cout << "-1 ";
	}
	
	return 0;
}