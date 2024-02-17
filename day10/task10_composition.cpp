/*Create 3 classes: Text, Box and TextBox.
Text has values (font, size, color and data).
Box has values (width, height, border, color).
And TextBox has only two functions, SetTextBox and PrintTextBox.
Using composition*/
#include <iostream>
using namespace std;
class Text{
protected:
    string font;
    string color;
    string data;
    int size;
    public:
    Text(string f,string c,string d,int s)
    {
        font=f;
        color=c;
        data=d;
        size=s;
    }
    void print()
    {
        cout<<"Font OF The Test Is "<<font<<endl;
        cout<<"Color OF The Test Is "<<color<<endl;
        cout<<"Data OF The Test Is "<<data<<endl;
        cout<<"Size OF The Test Is "<<size<<endl;
    }
};
class Box{
protected:
    int width;
    int height;
    string border_color;
    public:
    Box(int width,int height,string border_color)
    {
       this->width=width;
       this->height=height;
       this->border_color=border_color;
    }
    void print()
    {
        cout<<"Width Of The Box Is "<<width<<endl;
        cout<<"Height Of The Box Is "<<height<<endl;
        cout<<"Border Color Of The Box Is "<<border_color<<endl;
    }
};
class TextBox
{
private:
    Text t;
    Box b;
public:
    TextBox(string ff,string cc,string dd,int ss,int w,int h,string b_c):t(ff,cc,dd,ss),b(w,h,b_c)
    {

    }
    void print()
    {
        cout<<"Data Of The Box :"<<endl;
        cout<<"--------------------------------------"<<endl;
        t.print();
        b.print();
    }

};
int main()
{
    TextBox b1("Arial","Blue","Hello, TextBox!",50,100,200,"Black");
    b1.print();

}
