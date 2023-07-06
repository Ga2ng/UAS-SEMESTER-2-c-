#include <iostream>
using namespace std;

// insertion sort 

//ciri-ciri
// 1. dimulai dari index 2


int main(){

    int arr[] = {5, 2, 4, 6, 1, 3};
    int lengthArray = sizeof(arr)/sizeof(arr[0]);

    cout<<"First array : ";
    for(int i = 0; i < lengthArray; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;

    //descending insertion sort(terkecil)
    // dimulai dari baris ke2 / index ke 1
    for(int b = 1 ; b < lengthArray; b++){

        //pengecekan ke 2 jika benar maka di decrement  
        for(int c = b; c < lengthArray; c--){

            //program akan masuk ke pengujian 
            if(arr[c] < arr[c-1]){
                int temp = arr[c];
                arr[c] = arr[c-1];
                arr[c-1] = temp;

            }else{
                break;
            }

            //jika pengujian hasil else break ,array tidak akan di print proses
            //program akan keluar dari looping (c) dan kembali ke looping utama (b)

                //print proses insertion sort
                cout<<"proses ke | ";
                for(int i = 0; i < lengthArray; i++){
                    cout << arr[i] << " ";
                }
                cout<<endl;
        }
        cout<<"----------------------"<<endl;
    }

    // print array

    cout<<"Last array : ";
    for(int i = 0; i < lengthArray; i++){
        cout << arr[i] << " ";
    }


}