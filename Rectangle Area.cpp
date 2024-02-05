#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Rectangle{
    public:
    int width;
    int height;
        void display(){
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle{
    public:
    void read_input(){
        cin >> width >> height;
    }
    void display(){
        cout << width*height << endl;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    RectangleArea r2;
    r2.read_input();
    Rectangle *Rptr = &r2;
    Rptr -> display();
    r2.display();   
    return 0;
}
