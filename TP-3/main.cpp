#include <iostream>
#include "cone.h"

using namespace std;

int main()
{
    int h, r;
    cout << "Masukkan jari-jari kerucut : ";
    cin >> r;
    cout << "Masukkan tinggi kerucut : ";
    cin >> h;
    Cone c = {r, h};
    cout << "Luas alas : " << base(c) << endl;
    cout << "Volume kerucut :" << volume(c) << endl;
    return 0;
}
