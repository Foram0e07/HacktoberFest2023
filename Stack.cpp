//Stack implementation using LL
#include <iostream>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}

void MyStack ::push(int x) 
{
    struct StackNode * temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if (top == NULL)
    {
        return -1;
    }
    
    int x;
    StackNode * temp;
    x = top->data;
    temp = top;
    top = top->next;
    delete temp;
    return x;
}
