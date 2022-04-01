#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Rectangle.cpp"
using namespace std;


// Driver / Client
void show_rect(Rectangle list[])
{
    char alphabet[] =
        {
            'A',
            'B',
            'C',
            'D'
        };

    int i = 0;
    int arrSize = (sizeof(list[0]));
    while (i < arrSize)
    {
        if(i >= 4){return;}
        else{
            cout << list[i].get_width() << " " << list[i].get_height() << " " << list[i].get_top() << " " << list[i].get_left() << " " << list[i].get_angle() << " " << list[i].get_diagonal() << endl;
            cout << list[i + 1].get_width() << " " << list[i + 1].get_height() << " " << list[i + 1].get_top() << " " << list[i + 1].get_left() << " " << list[i + 1].get_angle() << " " << list[i + 1].get_diagonal() << endl;

            if (list[i].get_area() > list[i + 1].get_area())
            {
                cout << "Rect "<< alphabet[i] <<" is larger by " << list[i].get_area() - list[i + 1].get_area() << " sq. units";
            }
            else if (list[i].get_area() < list[i + 1].get_area())
            {
                cout << "Rect "<< (alphabet[i+1]) <<" is larger by " << list[i + 1].get_area() - list[i].get_area() << " sq. units";
            }
            else
            {
                cout << "The two rectangles are equal in area.";
            }
            cout << endl;

            i++;
        }
    }
}

int main()
{
    string rectName = "";
    Rectangle RectA;
    Rectangle RectB(12, 2);
    Rectangle RectC(10, 6, 5, 3);
    Rectangle RectD(12, 2, 5, 2, 90);
    Rectangle RectList[] = {RectA, RectB, RectC, RectD};

    show_rect(RectList);

    RectA.set_width(1);
    RectA.set_height(30);
    RectA.set_top(3);
    RectA.set_left(2);
    RectA.set_angle(2);

    RectB.set_width(18);
    RectB.set_height(30);
    RectB.set_top(20);
    RectB.set_left(2);
    RectB.set_angle(2);

    RectD.set_width(45);
    RectD.set_height(3);
    RectD.set_top(26);
    RectD.set_left(3);
    RectD.set_angle(2);

    show_rect(RectList);

    cout << "Please enter the name of the rectangle: ";
    cin >> rectName;

    RectA.set_age(difftime(time(0), RectA.get_tOB()));

    cout << rectName << " is " << RectA.get_age() << " seconds old. " << endl;

    return 0;
}
