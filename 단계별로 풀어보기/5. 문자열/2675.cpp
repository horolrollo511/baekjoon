#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int t;
	
	cin >> t;
	
	for(int i=0;i<t;i++) {
		int r;
		string s;
		
		cin >> r >> s;
		
		for(int i=0;i<s.length();i++)
			for(int j=0;j<r;j++)
				cout << s[i];
		
		cout << "\n";
	}
	
	return 0;
}