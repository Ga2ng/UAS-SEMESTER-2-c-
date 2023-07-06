#include <iostream>
using namespace std;

int main(){

    int index;
    int search;
    int arr[] = {25, 89, 90, 2, 25, 10, 67};
    int length = sizeof(arr) / sizeof(arr[0]);

    while(true){

    bool result = false;
    cout << "Search data : ";
    cin >> search;

        for( int i = 0; i < length; i++ ){
                if(arr[i] == search){
                    index = i;
                    result = true;
                    break;

                }
            }


        if (result == true){
            cout << "Element found at index " << index << endl;

        }else if (result == false){
            cout << "Element not found!!" << endl;
    }

    }
}