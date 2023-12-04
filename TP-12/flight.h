#ifndef FLIGHT_H_DEFINED
#define FLIGHT_H_DEFINED

#include <iostream>

using namespace std;

typedef struct jadwalPenerbangan infotype;

struct jadwalPenerbangan
{
    string kode, jenis, tanggal, waktu, asal, tujuan;
    int kapasitas;
};

typedef struct elmJadwal *adr_jadwalP;

struct elmJadwal
{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal
{
    adr_jadwalP first;
};

adr_jadwalP searchJ_1302220072(ListJadwal L, string dari, string ke, string tanggal);
void deleteFirstJ_1302220072(ListJadwal &L, adr_jadwalP &P);
void showJadwal_1302220072(ListJadwal L);
void insertLastJ_1302220072(ListJadwal &L, adr_jadwalP P);
adr_jadwalP createElemenJadwal_1302220072(infotype x);
void createListJadwal_1302220072(ListJadwal &L);

#endif // FLIGHT_H_DEFINED
