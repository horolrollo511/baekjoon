#include <iostream>
using namespace std;

int main(void) {
	int a;
	
	cin >> a;
	
	for(int i=0;i<a;i++) {
		int x,y;
		
		cin >> x >> y;
		
		cout << x+y << endl;
	}
	
	return 0;
}