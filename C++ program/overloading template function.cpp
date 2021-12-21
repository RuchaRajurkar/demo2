#include<iostream>
using namespace std;
template<class T>
void Test(T i)
{
    cout<<i<<endl;
}
void Test(int j)
{
    cout<<j<<endl;
}
int main()
{
    Test(10);
    Test(1.2);
}
