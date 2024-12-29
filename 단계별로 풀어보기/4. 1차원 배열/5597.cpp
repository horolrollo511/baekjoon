#include <iostream>
using namespace std;

int main(void) {
	int num[31]={0};
	
	for(int i=1;i<=30;i++) {
		int x;
		
		cin >> x;
		
		num[x]++;
	}
	
	for(int i=1;i<=30;i++)
		if(num[i]==0)
			cout << i << endl;

	return 0;
}