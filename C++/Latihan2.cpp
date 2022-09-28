#include <iostream>
using namespace std;

int main()
{
    int pil, harga, harga_kamar; string nama; float lama_hinap; char sarapan;

    cout << "Hotel Bahagia" << endl;
    cout << "-------------" << endl;

    cout << "1. VVIP (1.000.000)" << endl;
    cout << "2. VIP (750.000)" << endl;
    cout << "3. Standard (500.000)" << endl;
    cout << "4. Melati (250.000)" << endl;
    cout << "---------------------" << endl;

    cout << "Masukkan Nama Anda : " ; cin >> nama;
    cout << "Masukkan Jenis Kamar (1-4) : "; cin >> pil;

    switch (pil){
    case 1: cout << "Lama Hinap: "; cin >> lama_hinap;
            cout << "Dengan Sarapan (y/n) 50rb/hr : "; cin >> sarapan;
            cout << "--------------------------------" << endl;
            harga_kamar = 1000000;
            cout << "Terima Kasih " << nama << endl;
            cout << "Kamar Anda VVIP" << endl;
            cout << "Lama Hinap " << lama_hinap << " dengan ";

            if (sarapan == 'y' || sarapan == 'Y'){
                cout << "Sarapan" << endl;
                harga = (harga_kamar * lama_hinap) + (50000 * lama_hinap);
            } else {
                cout << "Tidak Sarapan" <<endl;
                harga = harga_kamar * lama_hinap;
            }
            
            cout << "Total bayar " << harga  << endl;
    break;
     case 2: cout << "Lama Hinap: "; cin >> lama_hinap;
            cout << "Dengan Sarapan (y/n) 50rb/hr : "; cin >> sarapan;
            cout << "--------------------------------" << endl;
            harga_kamar = 750000;
            cout << "Terima Kasih " << nama << endl;
            cout << "Kamar Anda VVIP" << endl;
            cout << "Lama Hinap " << lama_hinap << " dengan ";

            if (sarapan == 'y' || sarapan == 'Y'){
                cout << "Sarapan" << endl;
                harga = (harga_kamar * lama_hinap) + (50000 * lama_hinap);
            } else {
                cout << "Tidak Sarapan" <<endl;
                harga = harga_kamar * lama_hinap;
            }
            
            cout << "Total bayar " << harga  << endl;
    break;
     case 3: cout << "Lama Hinap: "; cin >> lama_hinap;
            cout << "Dengan Sarapan (y/n) 50rb/hr : "; cin >> sarapan;
            cout << "--------------------------------" << endl;
            harga_kamar = 500000;
            cout << "Terima Kasih " << nama << endl;
            cout << "Kamar Anda VVIP" << endl;
            cout << "Lama Hinap " << lama_hinap << " dengan ";

            if (sarapan == 'y' || sarapan == 'Y'){
                cout << "Sarapan" << endl;
                harga = (harga_kamar * lama_hinap) + (50000 * lama_hinap);
            } else {
                cout << "Tidak Sarapan" <<endl;
                harga = harga_kamar * lama_hinap;
            }
            
            cout << "Total bayar " << harga  << endl;
    break;
     case 4: cout << "Lama Hinap: "; cin >> lama_hinap;
            cout << "Dengan Sarapan (y/n) 50rb/hr : "; cin >> sarapan;
            cout << "--------------------------------" << endl;
            harga_kamar = 250000;
            cout << "Terima Kasih " << nama << endl;
            cout << "Kamar Anda VVIP" << endl;
            cout << "Lama Hinap " << lama_hinap << " dengan ";

            if (sarapan == 'y' || sarapan == 'Y'){
                cout << "Sarapan" << endl;
                harga = (harga_kamar * lama_hinap) + (50000 * lama_hinap);
            } else {
                cout << "Tidak Sarapan" <<endl;
                harga = harga_kamar * lama_hinap;
            }
            
            cout << "Total bayar " << harga  << endl;
    break;
    }
   return 0;
}    