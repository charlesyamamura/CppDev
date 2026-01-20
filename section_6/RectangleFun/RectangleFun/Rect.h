#ifndef RECT_H
#define RECT_H

class Rect {
public:
    Rect();
    Rect(double length, double width);
    double getLength() const;
    double getWidth() const;
    void setLength(double length);
    void setWidth(double width);
    double area() const;
    double perimeter() const;

private:
    double length;
    double width;
};

#endif
