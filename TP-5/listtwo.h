#ifndef LISTTWO_H_DEFINED /*DEFINE_LISTTWO_H*/
#define LISTTWO_H_DEFINED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;

typedef char infotype;
typedef struct elmlist *address;
struct elmlist
{
    infotype info;
    address next;
};

struct List
{
    address first;
};

int menu();
void createList(List &L);
address allocate(infotype x);
void insertLast(List &L, address P);
void showAll(List L);
float vocalPercentage(List L);
void showLastK(List L, int k);
#endif // LISTTWO_H_DEFINED
