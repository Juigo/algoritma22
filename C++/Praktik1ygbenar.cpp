#include <iostream>
using namespace std;

int main ()
{
    int umur;

    cout << "Masukkan Umur Anda : " ; cin >> umur ;
    if (umur > 17)
    {
        cout<< "Anda Masih Remaja" <<endl;
    } else {
        cout << "Anda Masih Anak" <<endl;
    }
    return 0;
}