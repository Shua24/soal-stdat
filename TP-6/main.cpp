#include <iostream>
#include "DLL.h"

using namespace std;

/*
 *  Untuk main bebas diimplementasikan seperti apa 
 *  untuk ketentuan main tanya asprak!
 *  Terima kasih :)
 */

int main()
{
   List Li;
   address ptrN;
   int jElemen;
   infotype listL;
   string ch;
   cout << "Buat list? ";
   cin >> ch;
   if(ch == "y") {
        createList(Li);
        cout << "Berapa elemen yang akan dibuat?: ";
        cin >> jElemen;
        for(int i = 0; i < jElemen; i++) {
            cout << "Artis: ";
            cin >> listL.nama;
            cout << "Lagu: ";
            cin >> listL.lagu;
            ptrN = allocate(listL);
            insertFirst(Li, ptrN);
        }
   } else {
       cout << "Anda telah keluar dari program" << endl;
   }
   return 0;
}
