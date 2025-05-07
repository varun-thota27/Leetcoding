class CustomStack {
public:
    vector<int> v;
    int size;
    CustomStack(int maxSize) {
        this->size=maxSize;
    }
    
    void push(int x) {
        if(v.size()<size)
        v.push_back(x);
    }
    
    int pop() {
        if(v.empty())
        return -1;

        int top=v.back();
        v.pop_back();

        return top;
        
    }
    
    void increment(int k, int val) {
        
        int lim=min(k,(int)v.size());
        for(int i=0;i<lim;i++)
        v[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */