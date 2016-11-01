#include <iostream>
using namespace std;

int FirstFactorial(int num) { 
    int cont = num;
    for (int i=1; i < cont; i++)
    {
        num = num * i;
    }
  
  return num; 
            
}

int main() { 
  
  int num;
  cin >> num;
  // keep this function call here
  cout << FirstFactorial(num);
  return 0;
    
} 