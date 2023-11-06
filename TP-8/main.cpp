#include "circlist.h"
#include <iostream>

using namespace std;

int main()
{
    List L;
    createList_1302220072(L);
    insertLast_1302220072(L, alokasi_1302220072(5));
    insertLast_1302220072(L, alokasi_1302220072(15));
    insertLast_1302220072(L, alokasi_1302220072(25));
    insertLast_1302220072(L, alokasi_1302220072(35));
    insertLast_1302220072(L, alokasi_1302220072(45));
    insertLast_1302220072(L, alokasi_1302220072(55));
    insertLast_1302220072(L, alokasi_1302220072(65));
    insertLast_1302220072(L, alokasi_1302220072(75));
    insertLast_1302220072(L, alokasi_1302220072(85));
    printInfo_1302220072(L);
    deleteByValue_1302220072(L,5);
    deleteByValue_1302220072(L,100);
    deleteByValue_1302220072(L,45);
    deleteByValue_1302220072(L,85);
    printInfo_1302220072(L);
    return 0;
}
