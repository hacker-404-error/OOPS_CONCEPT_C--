
/*DYNAMIC CONSTRUCTOR:
    We can pass the values during run time to the data members with the help of constructor
*/

#include<iostream>
#include<conio.h>
using namespace std;
class id
{
    private:
        int a,b;
    public:
        id(int,int);
        void display();
};
id::id(int x,int y)
{
    a=x;
    b=y;
}
void id:: display()
{
    cout<<"Sum is : ";
    cout<<""<<a<<"+"<<b<<"="<<a+b;
}
int main()
{
    system("cls");
    int x,y;
    cout<<"\nenter first number : ";
    cin>>x;
    cout<<"\nenter second number : ";
    cin>>y;
    id s(x,y);
    cout<<"\nvalue initialized "<<endl;
    s.display();
    return 0;
}