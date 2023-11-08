#include <iostream>
#include "list.h"

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

void insertFirst(List &L, address P)
{
    // Handle NULLs
    if(first(L) == NULL) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
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
    }
    while(next(Q) != NULL) {
        Q = next(Q);
    }
    next(Q) = P;
    next(P) = NULL;
}

void printInfo(List L)
{
    address p = first(L);
    cout << "Isi list: ";
    while(p != NULL) {
        cout << info(p) << "";
        p = next(p);
    }
    cout << endl;
}

address searchInfo(List L, infotype x)
{
    address ptr;
    first(L) = ptr;
    while((info(ptr) != x) && (ptr != NULL)) {
        next(ptr) = ptr;
    }
    if((info(ptr) == x) && (ptr != NULL)) {
        return ptr;
    }
}

