#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    int isi[10] = {55,44,22,33,40,69,100,29,43,15};
    int cari,jumlah=0;
    int indeks[10];
    int i,j;
    
    system ("color f6");
    cout << "\t\t\t\t\t-------------------------------------" << endl;
    cout << "\t\t\t\t\t|\tI PUTU MAHARDIKA            |" << endl;
    cout << "\t\t\t\t\t|\t18050623008                 |" << endl;
    cout << "\t\t\t\t\t|\tD3 Manajemen Informatika    |" << endl;
    cout << "\t\t\t\t\t-------------------------------------" << endl;
    cout << endl;
    cout << "---------------------------------" << endl;
    cout << "Masukan Data yang ingin dicari : ";
    cin >> cari;
    cout << "--------------------------------" << endl;

    for (i=0; i<10; i++)
    {
        if (isi[i] == cari)
        {
            indeks[jumlah]=i;

            jumlah=jumlah+1;

        }
    }
    cout << "Jumlah data : "<<jumlah<<endl;
    cout << "Indeks ke = " << endl;

    for (j=0; j<jumlah; j++)
    {
            cout << indeks[j]<<" ";
    }
    return 0;
}