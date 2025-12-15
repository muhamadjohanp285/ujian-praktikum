#include <iostream>

using namespace std;

int main()
{
    double harga, diskon, jumlahdiskon, hargasetelahdiskon;

    cout << "Selamat Datang di Toko UNISBA Blitar" << endl;
    cout << "===============================\n" << endl;

    cout << "Silahkan Masukkan :" << endl;
    cout << "Harga barang (Rp): ";
    cin >> harga;

    cout << "Diskon barang (%): ";
    cin >> diskon;

    jumlahdiskon = harga * diskon / 100;
    hargasetelahdiskon = harga - jumlahdiskon;

    cout << "\nHasil :" << endl;
    cout << "Jumlah Diskon  = Rp." << jumlahdiskon << endl;
    cout << "Harga Setelah Diskon = Rp. " << hargasetelahdiskon << endl;
    
    return 0;

}