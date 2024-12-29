#include <iostream>
using namespace std;

int main(void) {
	bool flag=false;
	
	while(!flag) {
		int a,b;
		
		cin >> a >> b;
		if(a==0 && b==0)
			flag=true;
		else
			cout << a+b << endl;
	}
	
	return 0;
}