#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
    ListJadwal L;
    int n;
    infotype elm;
    adr_jadwalP P;
    adr_jadwalP Q;
    createListJadwal_1302220072(L);
    cout << "Mau berapa kali isi : ";
    cin >> n;
    for (int i=1; i<=n; i++){
        cout << endl << "Masukkan asal : ";
        cin >> elm.asal;
        cout << "Masukkan jenis : ";
        cin >> elm.jenis;
        cout << "Masukkan kapasitas : ";
        cin >> elm.kapasitas;
        cout << "Masukkan kode : ";
        cin >> elm.kode;
        cout << "Masukkan tanggal : ";
        cin >> elm.tanggal;
        cout << "Masukkan tujuan : ";
        cin >> elm.tujuan;
        cout << "Masukkan waktu : ";
        cin >> elm.waktu;
        Q = createElemenJadwal_1302220072(elm);
        insertLastJ_1302220072(L, Q);
    }
    deleteFirstJ_1302220072(L, P);
    showJadwal_1302220072(L);
    if(searchJ_1302220072(L, "Surabaya", "Malang", "9_Desember_2022") != NULL) {
        cout << "Data ditemukan!" << endl;
        cout << "Data ditemukan pada alamat : " << searchJ_1302220072(L, "Surabaya", "Malang", "9_Desember_2022") << endl;
    } else {
        cout << "Data asal Surabaya tujuan Malang pada tanggal 9 Desember 2022 tidak ditemukan";
    }
    return 0;
}
