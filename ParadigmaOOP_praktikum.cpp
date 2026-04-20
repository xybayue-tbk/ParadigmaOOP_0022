#include <iostream>
using namespace std;

class barang{
    public :
        string nama;
        int jumlah;
        string kategori;
        string tanggalproduksi;

        void displayBarang(){
            cout << "Nama            : " << nama << endl;
            cout << "Jumlah          : " << jumlah << endl;
            cout << "Kategori        : " << kategori << endl;
            cout << "Tanggal Produksi: " << tanggalproduksi << endl;

        }
};

int main(){
    barang Elektronik;
    Elektronik.nama = "laptop";
    Elektronik.jumlah = 1;
    Elektronik.kategori = "Elektronik";
    Elektronik.tanggalproduksi = 20/04/2026;

    barang nonElektronik;
    nonElektronik.nama = "semen";
    nonElektronik.jumlah = 100;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalproduksi = 20/04/2026;

    Elektronik.displayBarang();
    nonElektronik.displayBarang();
};