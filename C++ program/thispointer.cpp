#include<iostream>
#include<string.h>
using namespace std;
class Test
{
public:
   void add(int x,int y)
   {
       cout<<"Int add called \n";
       cout<x+y;
   }
   void add(float x,float y)
   {
       cout<<"FLOAT add called \n";
       cout<<x+y;
   }
   void add(char*x,char*y)
   {
       char x1[15];
       strcpy(x1,x);
       strcat(x1,y);
       cout<<x1;
   }
};
int main()
{
    Test t1;
    t1.add(1.2f,3.4f);
    t1.add(100,200);
    t1.add("Hello World");
    return(0);
}
