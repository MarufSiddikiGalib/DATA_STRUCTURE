#include<iostream>
using namespace std;



class myStack{



public:



    myStack(int Size){
        int *Stack;
        Stack= new int[Size];
        top=0;
        maxSize=Size;
    }

    ~myStack(){
        delete[] Stack;
    }




    bool isEmpty(){
        if(top==0)
            return true;
        else
            return false;
    }



    void push(int element){
        bool check=isFull();
        if(check==true)
            cout << "Stack is full" << endl;
        else{
            Stack[top]=element;
            top++;
        }



    }



    bool isFull(){
        if(top==maxSize)
            return true;
        else
            return false;
    }



    void show(){
        for(int i=0;i<top;i++)
            cout<< Stack[i] << "  ";
        cout << endl;
    }



    void pop(){
        top=top-1;
        cout << Stack[top]<<endl;
    }
};



int main(){



    myStack S(100);



    cout << S.isEmpty()<< endl;
    S.push(5);
    S.push(8);
    S.push(15);
    S.push(18);
    S.push(100);
    cout << "Elements in the stack: " ;
    S.show();
    cout << S.isFull()<< endl;
    S.pop();
    cout << "Elements in the stack after pop: " ;
    S.show();
    return 0;
}
