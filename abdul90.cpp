#include<iostream>
using namespace std;
class base
{
public:
base()
{
cout<<"Constructor of base class is called"<<endl;
}
~base()
{
cout<<"Destructor of base class is called"<<endl;
}
};

class derived:public base
{
public:
derived()
{
cout<<"Constructor of derived class is called"<<endl;
}
~derived()
{
cout<<"Destructor of derived class is called"<<endl;
}
};
int main()
{
base *p=new derived();
delete p;
return 0;
}
