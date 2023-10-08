#include <iostream>
#include "list.h"

using namespace std;

int main()
{
  /*Soal fungsinya harus ada semua di main.cpp atau engga
   * tolong tanya ke asprak
   * Info ini khusus buat yang aspraknya santai
   * ~Shua24
   * */
    List Li;
    address Ptr;
    infotype digits;
    createList(Li);
    for(int i = 0; i < 10; i++) {
        cout << "Digit " << i+1 << ": ";
        cin >> digits;
        Ptr = allocate(digits);
        insertLast(Li, Ptr);
    }
    printInfo(Li);
    return 0;
}

