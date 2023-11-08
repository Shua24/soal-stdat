# Kompilasi C++
C++ berbeda dengan bahasa pemrograman Go yang bahasa pemrogramannya sudah langsung satu paket dengan compiler-nya. Compiler untuk C++ ada banyak. Dalam MK ini compiler yang
digunakan adalah compiler GNU (`g++`).
## Compile program dengan GNU
Cara compile program dengan `g++` jika header sudah satu direktori dengan file cpp lainnya adalah dengan perintah berikut di command-line (powershell, bash, dsb).
Misalkan ada 3 file, `main.cpp`, `implementasi_primitif.cpp` dan `header.h`,
```
g++ main.cpp implementasi_primitif.cpp -I header.h
```
## Perintah Jika header berada di satu folder
Menggunakan permisalan sebelunya jika header berada di satu folder berbeda, misalkan namanya `include` maka perintahnya berubah menjadi perintah berikut:
```
g++ main.cpp implementasi_primitif.cpp -I /direktori/include
```
atau jika folder sudah satu direktori dengan file cpp lainnya maka perintahnya sebagai berikut:
```
g++ main.cpp implementasi_primitif.cpp -I include/
```
