class Queue{



private:
    int Q[100];
    int front = -1, rear=-1;
    int maxSize = 100;



public:
    bool isEmpty(){
        if(front==-1 && rear ==-1)
            return true;
        else return false;
    }
    bool isFull(){
        if(rear == maxSize)
            return true;
        else
            return false;
    }



    void enQueue(int item){
        rear++;
        if(rear==0)
            front=0;
        if(rear==maxSize)
            cout << "Queue is Full";
        else
            Q[rear]=item;
    }
    void deQueue(){
        if(front=-1 && rear =-1)
            cout << "Queue already empty"<< endl;
        else
            cout << Q[front];
        front++;
        if(front==rear){
            front=-1;
            rear=-1;
        }

    }



};
int main(){



    Queue Q;
    bool ans;
    ans = Q.isEmpty();
    cout << ans ;
}
