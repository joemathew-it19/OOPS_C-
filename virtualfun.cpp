#include <iostream>

using namespace std;
class inter
{
public:
    virtual void display()=0;
};
class myclass1:public inter
{
public:
    void display()
    {
        cout<<"myclass1"<<endl;
    }
};
class myclass2:public inter
{
public:
    void display()
    {
        cout<<"myclass2"<<endl;
    }
};
int main()
{
    inter *obj;
    myclass1 obj1;
    obj = &obj1;
    obj->display();
    myclass2 obj2;
    obj = &obj2;
    obj->display();
    obj1.display();
    obj2.display();
    return 0;
}
