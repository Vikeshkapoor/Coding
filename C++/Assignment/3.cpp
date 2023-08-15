#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

class Rectangle {
    private:
        Point topLeft;
        Point bottomRight;
    public:
        Rectangle(Point tl, Point br) {
            topLeft = tl;
            bottomRight = br;
        }
        void reflectX() {
            topLeft.y = -topLeft.y;
            bottomRight.y = -bottomRight.y;
        }
        void reflectY() {
            topLeft.x = -topLeft.x;
            bottomRight.x = -bottomRight.x;
        }
        void translate(double dx, double dy) {
            topLeft.x += dx;
            topLeft.y += dy;
            bottomRight.x += dx;
            bottomRight.y += dy;
        }
        void scale(double sx, double sy) {
            topLeft.x *= sx;
            topLeft.y *= sy;
            bottomRight.x *= sx;
            bottomRight.y *= sy;
        }
        void rotate(double angle) {
            double radians = angle * (M_PI / 180);
            double newX, newY;
            newX = topLeft.x * cos(radians) - topLeft.y * sin(radians);
            newY = topLeft.x * sin(radians) + topLeft.y * cos(radians);
            topLeft.x = newX;
            topLeft.y = newY;
            newX = bottomRight.x * cos(radians) - bottomRight.y * sin(radians);
            newY = bottomRight.x * sin(radians) + bottomRight.y * cos(radians);
            bottomRight.x = newX;
            bottomRight.y = newY;
        }
        void display() {
            cout << "Top Left: (" << topLeft.x << ", " << topLeft.y << ")" << endl;
            cout << "Bottom Right: (" << bottomRight.x << ", " << bottomRight.y << ")" << endl;
        }
};

int main() {
    Point tl = {0, 0};
    Point br = {5, 10};
    Rectangle rect(tl, br);
    cout << "Original Rectangle:" << endl;
    rect.display();
    cout << "Reflected across x-axis:" << endl;
    rect.reflectX();
    rect.display();
    cout << "Translated by (2, 3):" << endl;
    rect.translate(2, 3);
    rect.display();
    cout << "Scaled by 2 in x and 0.5 in y:" << endl;
    rect.scale(2, 0.5);
    rect.display();
    cout << "Rotated by 30 degrees:" << endl;
    rect.rotate(30);
    rect.display();
    return 0;
}