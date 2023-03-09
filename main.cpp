#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, menor;

    // Lendo input
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite o terceito numero: ";
    cin >> c;

    // Analisando o menor numero
    menor = a;
    if (a > b) {
        menor = b;
    }
    if (b > c) {
        menor = c;
    }

    cout << endl << "Menor numero =" << menor;

    return 0;
}
