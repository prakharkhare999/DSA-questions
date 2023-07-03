#include <iostream>
#include <stack>
using namespace std;
int main()
{

    // creation

    stack<int> st;

    // insert
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // delete

    st.pop();

    // cheack the top
    cout << "top of the stack  " << st.top() << endl;

    // empty

    if (st.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    // print the stack

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}
