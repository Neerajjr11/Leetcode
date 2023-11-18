// with extra space
// class MinStack {
// public:
//     stack<int> s;
//     stack<int> ss;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         s.push(val);
//         if(ss.empty())
//             ss.push(val);
//         else if(ss.top() >= val)
//             ss.push(val);
//     }
    
//     void pop() {
//         int x = s.top();
//         s.pop();
//         if(x == ss.top())
//             ss.pop();
//     }
    
//     int top() {
//         return s.top();
//     }
    
//     int getMin() {
//         return ss.top();
//     }
// };

// with O(1) space
class MinStack {
public:
    stack<long long> s;
    long long min_ele;
    
    MinStack() {
        min_ele = INT_MAX;
    }
    
    void push(int val) {
        if (s.empty()) {
            s.push(val);
            min_ele = val;
        } else {
            if (val >= min_ele) {
                s.push(val);
            } else {
                s.push(2LL * val - min_ele);
                min_ele = val;
            }
        }
    }
    
    void pop() {
        if (s.empty()) return;

        long long top = s.top();
        s.pop();

        if (top < min_ele) {
            min_ele = 2LL * min_ele - top;
        }
    }
    
    int top() {
        if (s.empty()) return -1;

        long long top = s.top();
        if (top < min_ele) {
            return min_ele;
        }
        return top;
    }
    
    int getMin() {
        if (s.empty()) return -1;

        return min_ele;
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */