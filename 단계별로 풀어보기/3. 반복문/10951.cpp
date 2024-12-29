#include <iostream>
using namespace std;

int main(void) {
	bool flag=false;
	
	while(!flag) {
		int a,b;
		
		cin >> a >> b;
		if(cin.eof())
			flag=true;
		else
			cout << a+b << endl;
	}
	
	return 0;
}