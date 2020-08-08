/*#include <iostream>

using namespace std;
class base
{
    int x;
public:
    base(int i)
    {
        x=i;
    }
    void operator-();
    void display();


};
void base:: operator-()
{
    x = -x;
}
void base:: display()
{
    cout<<"value"<<x;
}
int main()
{
    base a(10); // a==> object
    a.display();
    -a;
    a.display();
    return 0;
} */
#include <iostream>

using namespace std;
class base
{
    int x;
public:
    base(int i)
    {
        x=i;
    }
    void operator+(base);



};
void base:: operator+(base obj)
{
    int sum;
    sum = x+obj.x;
    cout<<x<<endl;
    cout<<obj.x<<endl;
    cout<<"sum:"<<sum;
}

int main()
{
   base obj1(5);
   base obj2(10);
   obj1+obj2;
    return 0;
}

