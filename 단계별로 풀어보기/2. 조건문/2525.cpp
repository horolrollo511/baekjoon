#include <iostream>
using namespace std;

int main(void) {
	int a,b,c;
	
	cin >> a >> b >> c;
	
	a=(a+c/60)%24;
	c%=60;
	
	if(b+c>=60) {
		if(a+1==24)
			a=0;
		else
			a++;
		
		b+=c-60;
	}
	else
		b+=c;
	
	cout << a << " " << b;
	
	return 0;
}