#include <iostream>
using namespace std;
int main (){
    int a , b, t;
    double luas;
    cout << "Masukan sisi bawah = ";
    cin >> b;
    cout << "masukan sisi atas = ";
    cin >> a;
    cout << "masukan tinggi = ";
    cin >> t;
    luas = 0.5*(a+b)*t;
    cout << "luas trapesium = " << luas;

    return 0;
}

