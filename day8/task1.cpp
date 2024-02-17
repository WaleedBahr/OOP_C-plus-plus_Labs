/*overload the insertion operator and extraction operator to print and read an object of type Complex*/
#include <iostream>
using namespace std;
class Complex{
private:
    int r;
    int i;
public:
    Complex()
    {
        r=0;
        i=0;
    }
   friend istream& operator>>(istream& in , Complex& c );
   friend ostream& operator<<(ostream& out , Complex& c );
};
    istream& operator>>(istream& in , Complex& c )
    {
        cout<<"Enter The Real Part : ";
        in>>c.r;
        cout<<"Enter The Imagine Part : ";
        cin>>c.i;
        return (in);
    }
    ostream& operator<<(ostream& out, Complex& c)
    {
        out<<"The Complex Number = ";
        out << c.r <<" + "<<c.i<< "i"<<endl;
    }

int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;

}

