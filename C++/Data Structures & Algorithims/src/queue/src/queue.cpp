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
            //cout << "Rear = " << rear << " and front = " << _front;
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
                for(int i=_front; i<=rear; i++){
                    cout << "\t\t\t+--+\n";
                    cout << "\t\t\t|" << item[i] << "|\n";
                }
            cout << "\t\t\t+--+";
            }else{
                cout<<"Queue Underflow";
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
