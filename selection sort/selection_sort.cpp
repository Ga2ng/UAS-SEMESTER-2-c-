#include <iostream>
using namespace std;


//SELECTION SORT
// ciri-ciri urut dari kiri
// 

int main(){

    int arr[] = {3,4,6,5,2};
    int lengthArray = sizeof(arr)/sizeof(arr[0]);

    int temp, curr;

    //print fists array
    cout<<"First array : ";
    for(int i = 0; i < lengthArray; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;

    // Selection sort
    for(int a = 0; a < lengthArray; a++){
        temp = arr[a]; // baris paling kiri urut
        curr = a;//variable penunjuk posisi sekarang
        for(int b = a ; b < lengthArray; b++){

            //melakukan looping hingga true atau limit
            if(arr[b] < temp){

                //variable sementara
                temp = arr[b];
                curr = b;
            }
        }

        //perpipndahan dari paling kiri dan baris akhir
        //arr[curr] = baris akhir array dituker dengan paling kiri
        arr[curr] = arr[a];

        //arr[a] baris kiri ditukar variable temp dari loop (b)
        arr[a] = temp;

        cout<<endl;
        //print proses
        cout<< a+1 << " : ";
        for(int c = 0; c < lengthArray; c++){
            cout<< arr[c] << " ";
        }

    }

}