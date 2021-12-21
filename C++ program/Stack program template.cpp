#include<iostream>
using namespace std;
template<class T>
class Stack
{
private:
    T*arr;
    int top=-1;
public:
    Stack()
    {
        arr=new T[5];
        top=-1;
    }
    void push(T x)
    {
        top++;
        arr[top]=x;
        cout<<"Pushed item is"<<arr[top]<<endl;
    }
    void pop()
    {
        cout<<"poped item is"<<arr[top]<<endl;
        top--;
    }
};
int main()
{
    Stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    Stack<double>st1;
    st1.push(1.2);
    st1.push(2.2);
    st1.push(5.2);
    st1.push(7.2);
    st1.pop();
    return(0);
}
