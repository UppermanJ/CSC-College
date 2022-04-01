/******************************************************************************
JSU 08 FEB / CW
Using open-source class definitions 
*******************************************************************************/

#include <iostream>   
using namespace std;

// Definition
class Rectangle { 
    
    // properties
    public:
    float width, height;
    int top, left;
 
    // methods
    void move (int top_change, int left_change) {
    top = top + top_change;
    left = left + left_change;
    }
 
    void rotate90 () {
    int temp = width;
    width = height;
    height = temp;
    }

    void expand (int pct) {
    width = width * (1.0 + float(pct)/100);
    height = height * (1.0 + float(pct)/100);
    }

    void show_rect(Rectangle r){
        cout << "Rectangle RectA has been initialized width, height, top and left as "
         << r.width << ", "
          << r.height << ", "
           << r.top << ", "
            << r.left << " in."
             << endl;
    }
};



// Driver / Client
int main(){ 
    int resize;
    Rectangle RectA;

    RectA.width = 12;
    RectA.height = 7;
    RectA.left = 50;
    RectA.top = 35;

    RectA.show_rect(RectA);

    RectA.move(24, 14);
    RectA.rotate90();
    RectA.expand(6);

    RectA.show_rect(RectA);

    return 0;

    
}