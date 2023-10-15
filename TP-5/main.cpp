#include <iostream>
#include "listtwo.h"

using namespace std;
/*
 * main.cpp ini untuk yang kemarin di-mod sisanya 1.
 * Seperti biasa, tanya asprsk
 * Kalau error, tanya asprak juga
 */
int main()
{
    List LL;
    address ptr;
    infotype chars;
    int choice = menu();
    int N, k;
    while(choice <= 4) {
         switch(choice) {
         case 1:
            cout << "Berapa data yang ingin dimasukkan?: ";
            cin >> N;
            for(int i = 0; i < N; i++) {
                cout << "Huruf: " << i+1 << ":";
                cin >> chars;
                ptr = allocate(chars);
                insertLast(LL, ptr);
            }
            break;
         case 2:
            showAll(LL);
            break;
         case 3:
            {
                float vprect = vocalPercentage(LL);
                cout << "Persentase huruf vokal :" << vprect << endl;
                break;
            }
         case 4:
            cin >> k;
            showLastK(LL, k);
            break;
         default:
            cout << "Pilihan tidak valid!";
            break;
        }
        choice = menu();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM";
    return 0;
}
