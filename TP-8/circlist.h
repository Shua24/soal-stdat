#ifndef CIRCLIST_H_DEFINED
#define CIRCLIST_H_DEFINED

#include <iostream>

#define first(L) L.first // unused
#define next(P) P->next // unused

typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
		infotype info;
		address next;
		address prev;
};

struct List
{
	address first;
	address last;
};

void createList_1302220072(List &L); // L.first = NULL;
address alokasi_1302220072(infotype x); // address p = new elmlist; return p;
void insertFirst_1302220072(List &L, address P);
void insertLast_1302220072(List &L, address P);
void insertAfter_1302220072(List &L, address prec, address P);
void printInfo_1302220072(List L);
void deleteFirst_1302220072(List &L, address &P);
void deleteLast_1302220072(List &L, address &P);
void deleteAfter_1302220072(List &L, address prec, address &P);
address findElm_1302220072(List &L, infotype x);
void dealokasi_1302220072(address P);
void deleteByValue_1302220072(List &L, infotype x);

#endif // CIRCLIST_H_DEFINED
