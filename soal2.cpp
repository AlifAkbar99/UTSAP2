#include <iostream>
using namespace std;
main (){
    int choose;
    char x;
    system ("cls");

    i:
    cout << "Daftar Calon Presiden" << endl;
    cout << "1. Soekarno" << endl;
    cout << "2. Soeharto" << endl;
    cout << "3. Bj.Habibie" << endl;
    cout << "4. Abdurrahman Wahid" << endl;
    cout << "5. Megawati" << endl;
    cout << "6. Susilo Bambang Yudhoyono" << endl;
    cout << "7. Jokowi Dodo" << endl;
    cout << "8. Anies Baswedan" << endl;
    cout << "9. Prabowo subianto" << endl;
    cout << "10. Ganjar Pranowo" << endl;
    cout << "Masukkan pilihan anda: " << endl; cin >> choose;

    switch (choose){ //pilihan presiden dengan switch agar tidak ada perbandingan
        case 1:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 1. Soekarno ";
        break;
        case 2:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 2. Soeharto ";
        break;
        case 3:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 3. Bj.Habibie ";
        break;
        case 4:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 4. Abdurrahman Wahid ";
        break;
        case 5:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 5. Megawati ";
        break;
        case 6:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 6. Susilo Bambang Yudhoyono ";
        break;
        case 7:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 7. Jokowi Dodo ";
        break;
        case 8:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 8. Anies Baswedan ";
        break;
        case 9:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 8. Prabowo Subianto ";
        break;
        case 10:
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 9. Ganjar Pranowo ";
        break;
    }
    cout << "Apakah anda ingin mengganti presiden? (Y/T) " << endl;
    cin >> x;
    if (x == 'y' || x == 'Y'){ //pilihan untuk mengulang
        goto i; // balik ke semula
    } else {
        cout << "selesai";
    }
}