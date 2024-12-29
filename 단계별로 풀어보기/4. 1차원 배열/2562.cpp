#include <iostream>
using namespace std;

int main(void) {
	int num[9];
	int a,max=0;
	
	for(int i=0;i<9;i++) {
		cin >> num[i];
		
		if(num[i]>max) {
			max=num[i];
			a=i;
		}
	}
	
	cout << num[a] << "\n" << a+1;
	
	return 0;
}