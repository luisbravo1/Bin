#include <iostream>
#include <string>

using namespace std;

int main() {

	int iIMEI, iSuma=0, iMod;
	

	cout << "Ingresa IMEI: " << endl;
	cin >> iIMEI;

	for(int n=0; n < 14; n++) {
		if (n%2!=0) {
			iSuma+=((iIMEI[n]-48)*2);
		}
		iSuma+=iIMEI[n];
	}

	iMod=iSuma%10;

	if (iMod > 10)
		cout << 10-iMod << endl;
	else if (iMod < 10)
		cout << iMod << endl;
	
	return 0;
}