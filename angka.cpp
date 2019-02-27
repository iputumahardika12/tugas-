#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    unsigned int arr[200]={0,1},r,in;
    
     system ("color f6");
    cout << "\t\t\t\t\t-------------------------------------" << endl;
    cout << "\t\t\t\t\t|\tI PUTU MAHARDIKA            |" << endl;
    cout << "\t\t\t\t\t|\t18050623008                 |" << endl;
    cout << "\t\t\t\t\t|\tD3 Manajemen Informatika    |" << endl;
    cout << "\t\t\t\t\t-------------------------------------" << endl;
    cout << endl;
	cout << "===========================================================" << endl;
    cout << "| PROGRAM MENCARI SUKU BILANGAN DENGAN BILANGAN FIBONACCI |" << endl;
    cout << "===========================================================" << endl;
    cout << " \n Masukkan bilangan ke = ";
    cin  >> in;

        for ( r=2 ; r<in ; r++) {
            arr[r] = arr[r-1] + arr[r-2];
        }

        for ( r=0 ; r<in ; r++) {
            cout << arr[r] << " " ;
        }
    cout << endl << endl;
}
