#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string imei;
    while(n--){
        cin >> imei;
        int sum = 0;
        for(int i=0;i<14;i++){
            if(i & 1)
            {
                sum+= (imei[i]-48)*2;
            }
        }
        
        sum%=10;
        
        if(sum>0)
            cout << 10-sum << endl;
        else
            cout << sum << endl;
        
    }
    

    return 0;
}