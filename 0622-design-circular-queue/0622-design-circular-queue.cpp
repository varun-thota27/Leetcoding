class MyCircularQueue {
public:
    int cap,curSize,f,r;
    int *arr;
    MyCircularQueue(int k) {
        cap=k;
        arr= new int[cap];
        curSize=0;
        f=0,r=-1;
    }
    
    bool enQueue(int val) {
        if(curSize==cap)
        return false;

        r=(r+1)%cap;
        arr[r]=val;
        curSize++;
        
        return true;
    }
    
    bool deQueue() {
        if(curSize==0)
        return false;

        f=(f+1)%cap;
        curSize--;

        return true;
    }
    
    int Front() {
        if(isEmpty())
        return -1;

        return arr[f];
    }
    
    int Rear() {
        if(isEmpty())
        return -1;

        return arr[r];
    }
    
    bool isEmpty() {
        return curSize==0;
    }
    
    bool isFull() {
        if(curSize==cap)
        return true;

        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */