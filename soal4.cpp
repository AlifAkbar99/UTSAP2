#include <iostream>
using namespace std; //kurangnya "namespace pada header"

int main () {
    system ("CLS");
    j: //agar goto jalan
    int a; //integer, bukan string karna string sebagai kumpulan antara karakter
    float umur; //float sebagai perhitungan angka
    cout << "Tebak Umur Saya : "; //kurangnya syntax
    cin >> a; //cin sebagai input 

    if (a <= 20){
        cout << "Jawaban Anda Benar" << endl;
    } else  {
        cout << "Jawaban Salah, Coba Lagi..." << endl; //kurangnya syntax 
        goto j;
    }
    
    cout << "Program Selesai"; 

    return 0;
}
