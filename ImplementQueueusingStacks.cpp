class Queue {
private:
    vector<int> quevec;
public:
    // Push element x to the back of queue.
    void push(int x) {
        quevec.push_back(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        quevec.erase(quevec.begin());
    }

    // Get the front element.
    int peek(void) {
        return quevec[0];
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if (quevec.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};