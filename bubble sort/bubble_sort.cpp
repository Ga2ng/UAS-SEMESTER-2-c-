#include <iostream>
using namespace std;

//BUBBLE SORT

int main(){

    int arr[] = {1,5,7,4,3,2};
    int arrayLength = sizeof(arr)/sizeof(arr[0]);

    cout << "array awal : ";
    for(int i = 0; i < arrayLength; i++){
        cout << arr[i] << " ";
    }

    //bubble sort
    for(int i = 0; i < arrayLength-1; i++){
        int acak = 0;
        for(int j = 0; j < arrayLength-1; j++){
            if(arr[j] > arr[j+1]){
                //perpindahan data 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                acak++;
            }
        }
        //jika acak 0 maka proses tidak perlu dilamjutkan
        if(acak == 0){
            break;
        }

        cout<<endl;
        cout<<"tahap-" << i+1 << " : ";
        for(int a = 0; a < arrayLength; a++){
            cout << arr[a] << " ";
        }
    }
}