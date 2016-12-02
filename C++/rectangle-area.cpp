//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/rectangle-area
class Rectangle {
    public:
        int width;
        int height;
        void display();
        Rectangle();
};

Rectangle::Rectangle(){}

void Rectangle::display(){
    cout << width << " " << height << endl;
}

class RectangleArea : public Rectangle{
    public:
        void read_input();
        void display();
        RectangleArea();
};

RectangleArea::RectangleArea(){}

void RectangleArea::read_input(){
    cin >> width >> height;
}

void RectangleArea::display(){
    cout << width*height << endl;
}
