class Stack {
    vector<int> vecstack;
public:
    // Push element x onto stack.
    void push(int x) {
        vecstack.push_back(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        vecstack.pop_back();
    }

    // Get the top element.
    int top() {
        return vecstack.back();
    }

    // Return whether the stack is empty.
    bool empty() {
        return vecstack.size() == 0 ? true : false;
    }
};