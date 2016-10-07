#include <iostream> 
using namespace std;

int main() {
    
    int iNumero;
    int iSigno = 1;
    int iSuma = 1;
    
    do {
        cin >> iNumero;
    } while (iNumero < 1);
    
    if (iNumero % 2 == 0)
        iNumero--;
    
    for (int cont = 1; cont <= iNumero; cont += 2) {
        if (cont != iNumero) {
            cout << cont;
            if (iSigno % 2 == 0) {
                cout << " + ";
                iSuma -= cont;
            } else {
                cout << " - ";
                if (cont != 1)
                iSuma += cont;
            }
            iSigno++;
        } else {
            if (iSigno % 2 == 0) {
                iSuma -= cont;
            } else {
                if (cont != 1)
                    iSuma += cont;
            }
        }
    }
    cout << iNumero << " = " << iSuma << endl;
}
