#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string a,b;
	char tmp;
	
	cin >> a >> b;
	
	tmp=a[0];
	a[0]=a[2];
	a[2]=tmp;
	
	tmp=b[0];
	b[0]=b[2];
	b[2]=tmp;
	
	if(stoi(a)>stoi(b))
		cout << a;
	else
		cout << b;
	
	return 0;
}