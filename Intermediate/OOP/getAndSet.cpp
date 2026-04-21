#include <iostream>
using namespace std;

class Rectangle {
    private:
    double width;
    double length;

    public:
    void setWidth (double w){
        width = w;
    }
    double getWidth(){
        return width;
    }

    void setLength (double l){
        length = l;
    }

    double getLength(){
        return length;
    }

};

int main (){
    Rectangle r1;
    r1.setWidth(5);
    r1.setLength(6);
    cout << "Width = " << r1.getWidth() << endl;
    cout << "Height = " << r1.getLength() << endl;
}


