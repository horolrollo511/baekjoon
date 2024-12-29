#include <iostream>
using namespace std;

int main(void) {
	int n;
	
	cin >> n;
	
	for(int i=0;i<n;i++) {
		string s;
		
		cin >> s;
		
		cout << s.front() << s.back() << endl;
	}
	
	return 0;
}