#include<iostream>
using namespace std;
class stack
{
private:
    int top;
    int arr[5];
public:
    stack()
    {
        top=-1; \\ initial condition
    }
    void push(int x)
    {
        if(top==4)
        {
            cout<<"stack is full \n";
        }
        else
        {
            top++;
            arr[top]=x;
            cout<<"pushed item is:"<<arr[top]<<endl;
        }
    }
        void pop()
        {
            if(top==-1)
            {
                cout<<"stack is empty \n";
            }
            else
            {
                cout<<"poped item is"<<arr[top];
            }
        }
        void disp()
        {
            cout<<"\n stack items:\n";
            int i;
            i=top;
            while(i>0)
            {
                cout<<arr[i]<<endl;
                i--;
            }
        }
};
int main()
{
    stack ob;
    ob.push(10);
    ob.push(20);
    ob.push(30);
    ob.push(40);
    ob.push(50);
    ob.push(60);
    ob.pop();
    ob.disp();
    return(0);
}
