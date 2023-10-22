#include "DLL.h"

bool isEmpty(List L)
{
    return (first(L) == NULL) && (last(L) == NULL);
}

void createList(List &L)
{
    L.first = NULL;
    L.last = NULL;
}


address allocate(infotype y)
{
    address p = new elmtlist;
    p->info = y;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

void insertFirst(List &L, address p)
{
    if(L.first == NULL && L.last == NULL) {
        p = L.first;
        p = L.last;
    } else {
        L.first = p->next;
        p = L.first->prev;
        p = L.first;
    }
}

void insertAfter(List L, address &prec, address &p)
{
    if(first(L) == NULL && last(L) == NULL) {
        p = L.first;
        p = L.last;
    } else {
        prec->next = p->next;
        p->prev = prec;
        p = prec->next;
    }
}

void insertLast(List &L, address p)
{
    if(first(L) == NULL && last(L) == NULL) {
        p = L.first;
        p = L.last;
    } else {
        L.last = p->prev;
        p = L.last->next;
        p = L.last;
    }
}

void deleteFirst(List L, address &p)
{
    p = L.first;
    if(L.first != L.last) {
        p->next = L.first;
        p->next = NULL;
        L.first->prev = NULL;
    } else {
        L.first = NULL;
        L.last = NULL;
    }
}

void deleteAfter(List &L, address &prec, address &p)
{
    if(L.first != L.last) {
        prec->next = p;
        p->next = prec->next;
        p->prev = NULL;
        p->next = NULL;
    } else {
        L.first = NULL;
        L.last = NULL;
    }
}

void deleteLast(List &L, address &p)
{
    if(L.first != L.last) {
        L.last = p;
        L.last->prev = L.last;
        p->prev = NULL;
        L.last->next = NULL;
    } else {
        L.first = NULL;
        L.last = NULL;
    }
}

void concat(List L1, List L2, List &L3)
{
    address p1 = L1.first;
    address p2 = L2.first;
    while(p1 != NULL && p2 != NULL) {
        if(p1 == p2) {
            cout << "Ada yang sama!" << endl;
        }
    }
    cout << endl;
}

address findLagu(string judul, List L)
{
    address p;
    L.first = p;
    while((p->info.lagu != judul) && (p != NULL)) {
        p->next = p;
    }
    if((p->info.lagu == judul) && (p != NULL)) {
        return p;
    }
    return NULL;
}

void removeLagu(string judul, List &L)
{
    address p = findLagu(judul, L);
    deleteAfter(L, p->prev, p);
}
