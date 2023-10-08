#ifndef LIST_H_DEFINED /*DEFINE LIST_H*/
#define LIST_H_DEFINED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;
typedef int infotype;
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
void createList_1302220072(List &L);
address allocate_1302220072(infotype x);
void insertFirst_1302220072(List &L, address P);
void insertLast_1302220072(List &L, address P);
void printInfo_130220072(List L);
#endif /*LIST_H_DEFINED*/

