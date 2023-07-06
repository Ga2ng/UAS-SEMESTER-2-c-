#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;  // Initialize top to -1 to indicate an empty stack
    }

    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack overflow! Cannot push element " << value << endl;
            return;
        }
        
        arr[++top] = value;  // Increment top and add the element to the top of the stack
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow! Cannot pop element from an empty stack." << endl;
            return;
        }
        
        int poppedValue = arr[top--];  // Get the top element and decrement top
        cout << "Popped element: " << poppedValue << endl;
    }

    void printStack() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: " << endl << endl ;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
            cout << endl;
            cout << "-" << endl;
        }
    }
};

int main() {
    Stack stack;

    string user;
    int value;

    cout << "1. push "<<endl;
    cout << "2. pop " <<endl;
    cout << "3. end " <<endl;

while(true){

    cout << "Input options : ";
    cin >> user;

    if(user == "1"){
        cout << "input data to push : ";
        cin >> value;
        stack.push(value);
        stack.printStack();

    }else if( user == "2" ){
        stack.pop();
        stack.printStack();
        
    }else if( user == "3" ){
        cout << "Program stopped!!" << endl;
        break;

    }else{
        cout << "Wrong input" << endl;
    }
}

}
