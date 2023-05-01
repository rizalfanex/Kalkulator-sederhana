#include <iostream>

using namespace std;

int main() {
    int a, b, hasil;
    char op;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan operator (+,-,*,/): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    switch (op) {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            if (b == 0) {
                cout << "Tidak bisa melakukan pembagian dengan nol" << endl;
                return 0;
            }
            hasil = a / b;
            break;
        default:
            cout << "Operator tidak valid" << endl;
            return 0;
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}

