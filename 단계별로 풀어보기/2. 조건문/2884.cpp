#include <iostream>
using namespace std;

int main(void) {
	int a,b;
	
	cin >> a >> b;
	
	if(b-45<0) {
		if(a-1<0)
			a=23;
		else
			a-=1;
		
		b=b+60-45;
	}
	else
		b-=45;
	
	cout << a << " " << b;
	
	return 0;
}