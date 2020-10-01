#include<iostream>
using namespace std;
class pala
{
    int x,y;
    public:
    pala(int a, int b)
    {
        x=a;
        y=b;

    }
    pala(pala &ob)
    {
        x=ob.x;
        y=ob.y;
    }
    void show()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};
int main()
{
    pala s1(68,69);
    s1.show();
    pala s2(0,0);
    s2.show();
    pala s3=s1;
    s3.show();
    return 0;
    }