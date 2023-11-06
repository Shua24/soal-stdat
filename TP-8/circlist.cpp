#include "circlist.h"
using namespace std;

void createList_1302220072(List &L)
{
    L.first = NULL;
    L.last = NULL;
}

address alokasi_1302220072(infotype x)
{
    address p = new elmlist;
    p->info = x;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

void insertFirst_1302220072(List &L, address p)
{
    if(L.first->prev == L.last) {
        p = L.first;
        p = p->next;
        p = p->prev;
    } else {
        L.first->prev = p->prev;
        p = L.first->prev->next;
        L.first = p->next;
        p = L.first->prev;
        p = L.first;
    }
}

void insertAfter_1302220072(List &L, address prec, address P)
{
    if(L.first->prev == L.last) {
        P = L.first;
        P = P->next;
        P = P->prev;
    } else {
        prec->next = P->next;
        prec = P->prev;
        P = prec->next->prev;
    }
}

void insertLast_1302220072(List &L, address p)
{
    if(L.first->prev == L.last) {
        p = L.first;
        p = p->next;
        p = p->prev;
    } else {
       insertAfter_1302220072(L, p, L.first->prev);
    }
}

void printInfo_1302220072(List L)
{
    address p = L.first;
    while(p != L.first) {
        cout << p->info;
        p = p->next;
    }
    cout << endl;
}

void deleteFirst_1302220072(List &L, address &P)
{
    if(L.first == NULL && L.last == NULL) {
        cout << "Kosong!";
    } else if(L.first->prev == L.last) {
        L.first = P;
        L.first = NULL;
        L.last = NULL;
    }
    else {
        L.first = P;
        L.first->next = L.first->prev->next;
        L.first = L.first->next->prev;
        L.first->next = L.first;
        P->next = NULL;
        P->prev = NULL;
    }
}

void deleteLast_1302220072(List &L, address &P)
{
    deleteAfter_1302220072(L, L.first->prev->prev, P);
}

void deleteAfter_1302220072(List &L, address prec, address &P)
{
    if(L.first == NULL && L.last == NULL) {
        cout << "Kosong!";
    } else if(L.first->prev == L.last) {
        L.first = P;
        L.first = NULL;
        L.last = NULL;
    }
    else {
        prec->next = P;
        P->next = prec->next;
        prec = P->next->prev;
        P->prev = NULL;
        P->next = NULL;
    }
}

address findElm_1302220072(List &L, infotype x)
{
    address p = L.first;
    while(p->next != L.first) {
        p->next = p;
    }
    if(p->info == x) {
        return p;
    }
    return NULL;
}

void deleteByValue_1302220072(List &L, infotype x)
{
    address p = findElm_1302220072(L, x);
    deleteAfter_1302220072(L, p, p->next);
}
