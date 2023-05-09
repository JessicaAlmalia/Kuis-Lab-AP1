#include <iostream>
using namespace std;
 
// Fungsi untuk mencetak isi Array nantinya
void cetakArray(int randominteger[], int n)
{
    for (int i = 0; i < n; i++)
        cout << randominteger[i] << " ";
}
 
// Fungsi untuk mendorong semua nol ke depan
void DorongNolKedepan(int randominteger[], int n)
{

    // Membuat sebuah variabel angka terakhir yang bukan 0 bernilai 0
    int BukanNol= 0;
 
    // Dorong semua bilangan yang bukan nol ke tempat yang sesuai
    for (int i = n - 1; i >= 0; i--) {

        // Tandai semua bilangan yang bukan nol
        if (!BukanNol)
            BukanNol = i;
        //Dorong semua bilangan yang bukan nol ke belakang
        if (randominteger[i] != 0)
            randominteger[BukanNol--] = randominteger[i];
    }
 
    // Dorong semua nol ke depan
    while (BukanNol >= 0)
        randominteger[BukanNol--] = 0;
}
 
int main()
{
    int randominteger[] = { 1, 2, 3, 0, 4, 5, 0, 0 };
    int n = sizeof(randominteger) / sizeof(randominteger[0]);
    DorongNolKedepan(randominteger, n);
    cetakArray(randominteger, n);
    return 0;
}
