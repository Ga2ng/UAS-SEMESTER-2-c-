#include <iostream>
using namespace std;

// const int max_size = 5;
#define max 5
int arr[max];
int top = 0;

bool isFull(){
    if( top >= max ){
        return true;

    }else{
        return false;

    }
}

bool isEmpty(){

    if( top == 0 ){
        return true;

    }else{
        return false;

    }
}

void enqueue(){

    if(!isFull()){
        cout << "Input data : ";
        cin >> arr[top];
        top++;
    }

}

void print(){
    if(!isEmpty()){
        cout << "Queue data " << endl;
        for( int i = 0 ; i < top ; i++){
            cout << arr[i] << " | " ;
        }
        cout << endl;

    }else{

        cout << "Data empty!!" << endl;
    }

    if( isFull()){
        cout << "Queue is full!!" << endl;
    }

}

void dequeue(){

    if(!isEmpty()){
        for( int d = 0; d < top - 1; d++){
            arr[d] = arr[d + 1];
        }
        top--;

    }else{
        cout << "Data empty!!";
    }
}

int main(){

    string user;

    cout << "1.Enqueue" << endl;
    cout << "2.Dequeue" << endl;
    cout << "3.End Program" << endl;

    while (true){

        cout << "Input options : " ;
        cin >> user;

        if( user == "1"){
            enqueue();
            print();

        }else if( user == "2"){
            dequeue();
            print();

        }else if( user == "3"){
            cout << "Program Stopped" << endl;
            break;

        }else{
            cout << "Wrong Input!!" << endl;

        }
    }

}