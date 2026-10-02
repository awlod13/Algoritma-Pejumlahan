#include <iostream>
using namespace std;

int main() {
    // Mendeklarasikan variabel bilangan
    int bil1, bil2;

    // Membuat variabel inputan sesuai keinginan pengguna
    cout << "Bilangan pertama: ";
    cin >> bil1;
    cout << "Bilangan kedua: ";
    cin >> bil2;

    // Menampilkan output dari kelima operator aritmatika secara sekaligus
    cout << "\nOutput:\n";
    cout << "Penjumlahan = " << bil1 + bil2 << endl;
    cout << "Pengurangan = " << bil1 - bil2 << endl;
    cout << "Perkalian = " << bil1 * bil2 << endl;
    
    // Menggunakan (float) (casting) agar operasi pembagian menghasilkan bilangan desimal (berkoma)
    cout << "Pembagian = " << (float)bil1 / bil2 << endl;
    
    cout << "Sisa bagi = " << bil1 % bil2 << endl;

    return 0;
}