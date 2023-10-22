#ifndef DLL_H_DEFINED /*DEFINE_DLL_H*/
#define DLL_H_DEFINED
#include <iostream>
#define first(L) L.first    // bisa dipakai tapi tidak dipakai
#define last(L) L.last      // bisa dipakai tapi tidak dipakai
#define info(P) P->info     // bisa dipakai tapi tidak dipakai
#define next(P) P->next     // bisa dipakai tapi tidak dipakai
using namespace std;
struct lagu
{
    string nama;
    string lagu;
};
typedef struct elmtlist *address;
typedef lagu infotype;
struct elmtlist
{
    infotype info;
    address prev;
    address next;
};
struct List
{
    address first;
    address last;
};
bool isEmpty(List L);
void createList(List &L);
address allocate(infotype y);
void createNewElmt(infotype X, address P);
void insertFirst(List &L, address p);
void insertLast(List &L, address p);
void insertAfter(List L, address &prec, address &p);
void deleteFirst(List L, address &p);
void deleteLast(List &L, address &p);
void deleteAfter(List &L, address &prec, address &p);
void concat(List L1, List L2, List &L3);
address findLagu(string judul, List L);
void removeLagu(string judul, List &L);
#endif // DLL_H_DEFINED

