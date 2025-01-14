#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char kode_pengobatan;
    int jumlah_obat;
    double biaya_pengobatan, biaya_obat, diskon=0, total_bayar, uang_dibayar, kembali;

    cout <<"PERHITUNGAN BIAYA KLINIK GIGI" <<endl;
    cout <<"-----------------------------" <<endl;
    cout << "\n";
    cout <<"Pilihan Pengobatan" <<endl;
    cout <<"1. Pemeriksaan Gigi     4. Bersihkan Kapur Gigi\n"
         <<"2. Cabut Gigi           5. Pemasangan Kawat Gigi\n"
         <<"3. Tambal Gigi          6. Operassi Ringan"<<endl;
    cout << "Masukkan Kode Pengobatan: ";
    cin >> kode_pengobatan;

    switch (kode_pengobatan) {
        case '1' :
            biaya_pengobatan = 125000;
            break;
        case '2' :
            biaya_pengobatan = 150000;
            break;
        case '3' :
            biaya_pengobatan = 225000;
            break;
        case '4' :
            biaya_pengobatan = 300000;
            break;
        case '5' :
            biaya_pengobatan = 350000;
            break;
        case '6' :
            biaya_pengobatan = 5000000;
            break;
        default :
            cout <<"Kode Pengobatan Tidak Ada, Mohon Diisi Kembali" <<endl;
            return 1;
    }
    cout << "Masukkan Jumlah Obat: ";
    cin >> jumlah_obat;
    biaya_obat = jumlah_obat*500000; //perkiraan harga obat
    if (jumlah_obat >=0 && jumlah_obat <=1) {
        diskon = (biaya_pengobatan + biaya_obat) * 0.25;}
    else if (jumlah_obat >=2 && jumlah_obat <=3) {
        diskon = (biaya_obat + biaya_pengobatan) * 0.20;}
    else if (jumlah_obat >3) {
        diskon = (biaya_obat + biaya_pengobatan) * 0.15;}
    
    total_bayar = biaya_pengobatan + biaya_obat - diskon;

    cout <<"Jumlah Biaya Yang Dibayar: " << total_bayar <<endl;
    cout <<"Jumlah Uang: ";
    cin >> uang_dibayar;
    if (uang_dibayar < total_bayar) 
    {
        cout << "Uang Yang Dibayar Kurang" <<endl;
        return 1;
    }
    
    kembali = uang_dibayar - total_bayar;
    cout << "Kembali: " <<kembali <<endl;
    return 0;
    
}
