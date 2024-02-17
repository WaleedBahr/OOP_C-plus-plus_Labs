/*Create 3 classes: Text, Box and TextBox.
Text has values (font, size, color and data).
Box has values (width, height, border, color).
And TextBox has only two functions, SetTextBox and PrintTextBox.
Using inheritance*/
#include <iostream>
#include <string>
using namespace std;

class Text {
protected:
    string font;
    double size;
    string color;
    string data;

public:
     Text(string font ,string color,string data,double size)
     {
        this->color=color;
        this->data=data;
        this->font=font;
        this->size=size;
        }
};

class Box {
protected:
    int width;
    int height;
    bool hasBorder;
    string borderColor;

public:
    Box(int width, int height, bool hasBorder, string borderColor)
        : width(width), height(height), hasBorder(hasBorder), borderColor(borderColor) {}

    void printBox() const {
        cout << "Width: " << width << ", Height: " << height << ", Border: " << (hasBorder ? "Yes" : "No")
             << ", Border Color: " << borderColor << endl;
    }
};

class TextBox : public Text, public Box {
public:
    TextBox(string font, double size, string color, string data, int width, int height, bool hasBorder, string borderColor)
        : Text(font, color, data, size), Box(width, height, hasBorder, borderColor) {}

    void setTextBox(string font, double size, string color, string data, int width, int height, bool hasBorder, string borderColor) {
        this->font = font;
        this->size = size;
        this->color = color;
        this->data = data;
        this->width = width;
        this->height = height;
        this->hasBorder = hasBorder;
        this->borderColor = borderColor;
    }

    void printTextBox() const {
        cout << "TextBox Properties:" << endl;
        cout << "Font : " << font << endl;
        cout << "Size : " << size << endl;
        cout << "Color : " << color << endl;
        cout << "Data : " << data << endl;
        cout << "width : " << width << endl;
        cout << "height: " << height << endl;
        cout << "hasBorder : " << hasBorder << endl;
        cout << "borderColor : " << borderColor << endl;
        printBox();

    }
};

int main() {
    TextBox textBox("Arial", 15, "Red", "Hello, TextBox!", 200, 100, true, "Blue");
    textBox.printTextBox();


    return 0;
}
