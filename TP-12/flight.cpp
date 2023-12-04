#include "flight.h"

void createListJadwal_1302220072(ListJadwal &L)
{
    L.first = NULL;
}

adr_jadwalP createElemenJadwal_1302220072(infotype x)
{
    adr_jadwalP p = new elmJadwal;
    p->info = x;
    p->next = NULL;
    return p;
}

void insertLastJ_1302220072(ListJadwal &L, adr_jadwalP P)
{
    if (L.first == NULL){
        L.first = P;
    } else {
        adr_jadwalP q = L.first;
        while (q->next != NULL){
            q = q->next;
        }
        q->next = P;
    }
}

void showJadwal_1302220072(ListJadwal L)
{
    adr_jadwalP p = L.first;
    while (p != NULL) {
        cout << "Asal : " << p->info.asal << " | ";
        cout << "Jenis : " << p->info.jenis<< " | ";
        cout << "Kapasitas : " << p->info.kapasitas << " | ";
        cout << "Kode : " << p->info.kode << " | ";
        cout << "Tanggal : " << p->info.tanggal << " | ";
        cout << "Tujuan : " << p->info.tujuan << " | ";
        cout << "Waktu : " << p->info.waktu;
        p = p->next;
        cout << endl;
    }
    cout << endl;
}

void deleteFirstJ_1302220072(ListJadwal &L, adr_jadwalP &P)
{
    if (L.first == NULL){
        P = NULL;
        cout << "List Kosong";
    } else if (next(L.first) == NULL){
        P = L.first;
        L.first = NULL;
    } else {
        P = L.first;
        L.first = P->next;
        P->next = NULL;
    }
}

adr_jadwalP searchJ_1302220072(ListJadwal L, string dari, string ke, string tanggal)
{
    adr_jadwalP p = L.first;
    while (p != NULL) {
        if (dari == p->info.asal && ke == p->info.tujuan && p->info.tanggal == tanggal){
            return p;
        }
        p = p->next;
    }
    return NULL;
}
