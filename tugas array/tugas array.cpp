

#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variabel global array a dengan ukuran 20
int n;//deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() { //procedur untuk input
    while (true) {
        cout << "masukan banyaknya elemen pada array :"; //output ke layar
        cin >> n;//input dari pengguna
        if (n <= 20)//jika n kurang dari atau sama dengan 20
            break;//keluar dari loop
        else {
            cout << "\nArray hanya dapat mempunyai maksimal 20 elemen\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << " Masukan elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {//looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }
}
void BubbleSortArray() {//procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1;
    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1;

        cout << "\nPass " << pass - 1 << ":";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    } while (pass <= n - 1);
}
void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    input();
    BubbleSortArray();
    display();
    return 0;
}


