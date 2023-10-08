#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List Li;
    address Ptr;
    infotype digits;
    createList_1302220072(Li);
    for(int i = 0; i < 10; i++) {
        cout << "Digit " << i+1 << ": ";
        cin >> digits;
        Ptr = allocate_1302220072(digits);
        insertLast_1302220072(Li, Ptr);
    }
    printInfo_130220072(Li);
    return 0;
}

