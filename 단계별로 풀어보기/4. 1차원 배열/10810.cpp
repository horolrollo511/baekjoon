#include <iostream>
using namespace std;

int main(void) {
	int num[101]={0};
	int n,m;
	
	cin >> n >> m;
	
	for(int i=0;i<m;i++) {
		int a,b,c;
		
		cin >> a >> b >> c;
		
		for(int j=a;j<=b;j++)
			num[j]=c;
	}
	
	for(int i=1;i<=n;i++)
		cout << num[i] << " ";
	
	return 0;
}