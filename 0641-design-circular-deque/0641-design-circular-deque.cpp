class MyCircularDeque {
public:
    int cap,curSize,f,r;
    int *arr;
    MyCircularDeque(int k) {
        cap=k;
        arr= new int[cap];
        curSize=0;
        f=0,r=cap-1;
    }
    
    bool insertFront(int val) {
        if(isFull())
        return false;

        f=(f-1+cap)%cap;
        arr[f]=val;
        curSize++;
        
        return true;
    }
    
    bool insertLast(int val) {
        if(isFull())
        return false;

        r=(r+1)%cap;
        arr[r]=val;
        curSize++;
        
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())
        return false;

        f=(f+1)%cap;
        curSize--;

        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())
        return false;

        r=(r-1+cap)%cap;
        curSize--;
        return true;
    }
    
    int getFront() {
        if(isEmpty())
        return -1;

        return arr[f];
    }
    
    int getRear() {
        if(isEmpty())
        return -1;

        return arr[r];
    }
    
    bool isEmpty() {
        return curSize==0;
    }
    
    bool isFull() {
        return curSize==cap;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */