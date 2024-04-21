#include <iostream>
using namespace std;

int main() {

        int x, z;
        cout << "Masukkan nilai suku-n: ";
        cin >> x;

        int jumlah = 0;

        for (int z = 1; z <= x; z += 2) { 
            jumlah += z * z; //penjumlahan kuadrat
        }
        cout << "Jumlah kuadrat bilangan ganjil sampai " << x << " = " << jumlah << endl;

    return 0;
}
