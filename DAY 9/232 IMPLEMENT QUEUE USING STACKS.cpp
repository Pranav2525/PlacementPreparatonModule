class MyQueue {
    stack<int>stk1;
    stack<int>stk2;
public:
    MyQueue() {
    }
    void push(int x) {
     if(stk1.empty()==true)
     {
      stk1.push(x);
     }
     else 
     {
      while(stk1.empty()==false)
      {
       stk2.push(stk1.top());
       stk1.pop();
      }
      stk1.push(x);
      while(stk2.empty()==false)
      {
       stk1.push(stk2.top());
       stk2.pop();      
      }
     }
    }
    int pop() {
     int t=stk1.top();
     stk1.pop();
     return t;
    }
    int peek() {
     return stk1.top();   
    }
    bool empty() {
     return stk1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */