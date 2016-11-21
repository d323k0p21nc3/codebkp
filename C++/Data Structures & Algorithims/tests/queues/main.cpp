#include<iostream>
#include<cstdlib>
#define MAX_SIZE 10
using namespace std;
class Queue{
    private:
        int item[MAX_SIZE];
        int rear;
        int _front;

    public:
        Queue(){
            rear = -1;
            _front = 0;
        }

        void enqueue(int data){
            item[++rear] = data;
        }

        int dequeue(){
            return item[_front++];
        }

        int _size(){
            return (rear - _front + 1);
        }

        void display(){
            if(!this->isEmpty()){
                for(int i=_front; i<=rear; i++)
                cout<<item[i]<<endl;
            }else{
                cout<<"Queue Underflow"<<endl;
            }
        }

        bool isEmpty(){
            if(_front>rear){
                return true;
            }else{
                return false;
            }
        }

        bool isFull(){
            if(this->_size()>=MAX_SIZE){
                return true;
            }else{
                return false;
            }
        }
    };

int main(){
    Queue _queue;
    int choice, data;
    while(1){
        cout<<"\n1. Enqueue\n2. Dequeue\n3. Size\n4. Display all element\n5. Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            if(!_queue.isFull()){
                    cout<<"\nEnter data: ";
                    cin>>data;
                    _queue.enqueue(data);
            }else{
                cout<<"Queue is Full"<<endl;
            }
            break;
            case 2:
            if(!_queue.isEmpty()){
                cout<<"The data dequeued is :"<<_queue.dequeue();
            }else{
                cout<<"Queue is Empty"<<endl;
            }
                break;
            case 3:
                cout<<"Size of Queue is "<<_queue._size();
                break;
            case 4:
                _queue.display();
                break;
            case 5:
                exit(0);
                break;
        }
    }
    return 0;
}
