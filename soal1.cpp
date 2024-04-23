#include <iostream>
using namespace std;
main (){
    int temp;
    string nama, nim, matkul, dosen, kom;
    char grade;
    float nilaitugas, nilaiquiz, uts, uas, PA, total;

    system ("cls");
    cout << "=================================\n";
    cout << "Masukkan data anda dengan benar!!\n";
    cout << "=================================\n";
    cout << "Masukkan nama anda: ";
    getline (cin, nama); //menginput dengan karakter yg panjang
    cout << "Masukkan NIM anda: ";
    getline (cin, nim);
    cout << "Masukkan kom anda: ";
    cin >> kom;
    cin.ignore();
    cout << "Masukkan mata kuliah: ";
    getline (cin, matkul);
    cout << "Masukkan nilai tugas: ";
    cin >> nilaitugas;
    cout << "Masukkan nilai quiz: ";
    cin >> nilaiquiz;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;
    cout << "Masukkan Nama dosen PA anda: ";
    cin >> PA;

    total = nilaitugas*0.2 + nilaiquiz*0.1 + uts*0.35 + uas*0.35; //hitungan nilai

if (total >= 80 && total <= 100){ //if dan else sebagai perbandingan dari pilihan
    grade = 'A';
} else if (total >= 60 && total < 80 ){
    grade = 'B';
} else if (total >= 30 && total < 60 ){
    grade = 'C';
} else if (total >= 15 && total < 30){
    grade = 'D';
} else {
    grade = 'E';
}

system ("cls");
cout << "Nama: " << nama << endl;
cout << "NIM: " << nim << endl;
cout << "KOM: " << kom << endl;
cout << "Mata kuliah: " << matkul << endl;
cout << "Nilai: " << grade << endl;
}