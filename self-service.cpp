#include <iostream>
using namespace std;
int main ()
{
    const float kg = 34.90;
    float prato, valorPagar;
    cout << "Peso do prato do cliente: ";
    cin >> prato;
    valorPagar = kg * prato;
    cout << "Valor a pagar: " << valorPagar;

}