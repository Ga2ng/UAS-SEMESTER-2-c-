#include <iostream>

using namespace std;
void print(int *input, int n)
{//menampilkan data yang kita input
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << "\t";
    }
}

void radixsortlogic(int *input, int n)
{
    int i;

    int maxNumber = input[0];
    //mencari nilai terbesar  dan memasukan ke maxnumber
    for (i = 1; i < n; i++)
    {
        if (input[i] > maxNumber)
        {
            maxNumber = input[i];
        }
    }
    
    int exp = 1;
    int *tmpBuffer = new int[n];
    //perulangan sampai variabel exp lebih besar dari nilai inputan
    while (maxNumber / exp > 0)
    {
        int decimalBucket[10] = {0};
        //Hitung jumlah kunci yang akan masuk ke setiap array
        for (i = 0; i < n; i++)
        {
            decimalBucket[input[i] / exp % 10]++;
        }
        //Tambahkan jumlah array sebelumnya untuk memperoleh indeks setelah akhir setiap lokasi array dalam larik
        for (i = 1; i < 10; i++)
        {
            decimalBucket[i] += decimalBucket[i - 1];
        }
        //berguna untuk mengurutkan bilangan dan masuk ke tmpBuffer[i]
        for (i = n - 1; i >= 0; i--)
        {
            tmpBuffer[--decimalBucket[input[i] / exp % 10]] = input[i];
        }
        //salin array tmpbuffer[i] ke array input[i]
        for (i = 0; i < n; i++)
        {
            input[i] = tmpBuffer[i];
        }

        exp *= 10;
        cout << endl
             << endl
             << "PASS   : ";
        print(input, n);
    }
}

int main()
{
    int input[100], INPUT_SIZE;
    cout << "PROGRAM RADIX SHORT" << endl;
    cout << "MASUKKAN BANYAKNYA INPUTAN : ";
    cin >> INPUT_SIZE;
    cout << endl;

    for (int i = 0; i < INPUT_SIZE; i++)
    {
        cout << "MASUKKAN BILANGAN KE- " << i + 1 << " : ";
        cin >> input[i];
    }

    cout << endl
<< "DATA YANG DIINPUT : " << endl;
    print(input, INPUT_SIZE);
    
    radixsortlogic(input, INPUT_SIZE);
    cout << endl
         << endl
         << "Output: ";
    print(input, INPUT_SIZE);
    cout << endl
         << endl;
    cout << "TERIMA KASIH";
    return 0;
}
