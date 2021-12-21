#include<iostream>
using namespace std;
class Time
{
private:
    int hour,min;
public:
    Time(int m)
    {
        hour=m/60;
        min=m%60;
    }
    operator int()
    {
        int z;
        z=hour*60+min;
        return(z);
    }
    void showtime()
    {
        cout<<hour<<":"<<min<<endl;
    }
};
int main()
{
    int x=100;
    Time t1=x;
    t1.showtime();
    int y;
    y=t1;
    cout<<y<<endl;
    return(0);
}

