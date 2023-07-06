#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
// a   b
//   Y     = bentuk penukaran value temporary
// temp
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk mempartisi array dan mengembalikan indeks pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Pivot diambil dari elemen terakhir
    int i = low - 1;  // Indeks elemen terkecil

    // cout<< i << endl;
    cout<< arr[high] << endl;

    for (int j = low; j <= high - 1; j++) {  
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Fungsi rekursif untuk mengurutkan array menggunakan QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Menghitung indeks pivot
        int pivotIndex = partition(arr, low, high);

        // Memanggil quickSort pada dua bagian yang terpisah dari pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Fungsi untuk mencetak elemen-elemen array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "Array setelah diurutkan: ";
    printArray(arr, size);

    return 0;
}
