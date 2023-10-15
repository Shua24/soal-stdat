#include "listtwo.h"
#include <iostream>

int menu_1302220072()
{
    cout << "=========== MENU ================" << endl;
    cout << "1. Menambah N data baru." << endl;
    cout << "2. Tampilkan semua data" << endl;
    cout << "3. Tampilkan persentase huruf vokal" << endl;
    cout << "4. Tampilkan huruf ke-K terakhir" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilihan anda: ";
    int in = 0;
    cin >> in;
    return in;
}

void createList(List &L)
{
    first(L) = NULL;
}

address allocate(infotype x)
{
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void insertLast(List &L, address P)
{
    // NULL handling
    address Q;
    if(first(L) == NULL) {
        first(L) = P;
        next(P) = NULL;
    } else {
        Q = first(L);
        while(next(Q) != NULL) {
        Q = next(Q);
        }
    }
    next(Q) = P;
    next(P) = NULL;
}

float vocalPercentage(List L)
{
    int vnum, nnum;
    float percent;
    address ptr = first(L);
    nnum = 0;
    while(ptr != NULL) {
        nnum++;
        if((info(ptr) == 'a') || (info(ptr) == 'i') || (info(ptr) == 'u') || (info(ptr) == 'e') || (info(ptr) == 'o')) {
            vnum++;
        }
        ptr = next(ptr);
    }
    percent = float(vnum) / float(nnum);
    return percent * 100;
}

void showLastK(List L, int k)
{
    int nodeidx = 0;
    int len_list = 1;
    address P = first(L);
    while(P != NULL){
        P = next(P);
        len_list++;
    }
    int count = 1;
    int lastK = len_list - k;
    address Q = first(L);
    while(Q != NULL && count != lastK){
        Q = next(P);
        count++;
    }
    if(P != NULL && count == lastK){
        cout << info(P);
    }
}
void showAll(List L)
{
    address p = first(L);
    cout << "Isi list: ";
    while(p != NULL) {
        cout << info(p) << "-";
        p = next(p);
    }
    cout << endl;
}
