#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string a;
	int cnt=0;
	
	cin >> a;
	
	for(int i=0;i<a.length();i++) {
		if(a[i]>=65 && a[i]<=67)
			cnt+=3;
		else if(a[i]>=68 && a[i]<=70)
			cnt+=4;
		else if(a[i]>=71 && a[i]<=73)
			cnt+=5;
		else if(a[i]>=74 && a[i]<=76)
			cnt+=6;
		else if(a[i]>=77 && a[i]<=79)
			cnt+=7;
		else if(a[i]>=80 && a[i]<=83)
			cnt+=8;
		else if(a[i]>=84 && a[i]<=86)
			cnt+=9;
		else if(a[i]>=87 && a[i]<=90)
			cnt+=10;
	}
	
	cout << cnt;
	
	return 0;
}