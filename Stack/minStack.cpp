#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    stack<int> st;      // Main stack
    stack<int> minSt;   // Stores minimum elements

public:

    // Push element into stack
    void push(int val)
    {
        st.push(val);

        // If min stack is empty OR current value is smaller
        if(minSt.empty() || val <= minSt.top())
        {
            minSt.push(val);
        }
    }

    // Remove top element
    void pop()
    {
        if(st.empty())
        {
            cout << "Stack is Empty\n";
            return;
        }

        // If removed element is the current minimum
        if(st.top() == minSt.top())
        {
            minSt.pop();
        }

        st.pop();
    }

    // Return top element
    int top()
    {
        if(st.empty())
        {
            return -1;
        }

        return st.top();
    }

    // Return minimum element
    int getMin()
    {
        if(minSt.empty())
        {
            return -1;
        }

        return minSt.top();
    }

    // Check if stack is empty
    bool empty()
    {
        return st.empty();
    }
};

int main()
{
    MinStack st;
    st.push(5);
    st.push(2);
    st.push(1);
    st.push(3);
    cout << "Top Element : " << st.top() << endl;
    cout << "Minimum Element : " << st.getMin() << endl;
    st.pop(); // remove 3
    cout << "\nAfter removing 3\n";
    cout << "Top Element : " << st.top() << endl;
    cout << "Minimum Element : " << st.getMin() << endl;
    st.pop(); // remove 1
    cout << "\nAfter removing 1\n";
    cout << "Top Element : " << st.top() << endl;
    cout << "Minimum Element : " << st.getMin() << endl;
    return 0;
} 