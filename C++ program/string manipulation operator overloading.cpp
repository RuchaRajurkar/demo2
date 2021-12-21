#include<iostream>
#include<string.h>
using namespace std;
class String
{
private:
    char*fname;
    int len;
public:
    String()
    {

    }
    String(char*p)
    {
        len=strlen(p);
        fname=new char[len];
        strcpy(fname,p);
    }
    void show()
    {
        cout<<fname<<endl;
    }
    String operator +(String ob)
    {
        String temp;
        int x,y;
        x=strlen(fname);
        y=strlen(ob.fname);
        temp.fname=new char[x+y];
        strcpy(temp.fname,fname);
        strcat(temp.fname,ob.fname);
        return(temp);
    }
};
int main()
{
    String s1("Hello");
    String s2("World");
    String s3;
    s3=s1+s2;
    s3.show();
    return(0);
}
