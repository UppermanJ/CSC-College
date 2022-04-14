#include"Square.hpp"
using namespace std;

int main(){
    Rectangle rectA; string rectName;
    Rectangle rectB(10, 6, 5, 3);

    cout << rectA.get_width() << " " << rectA.get_height() << " " << rectA.get_top() << " " << rectA.get_left() << endl;

    rectA.set_width(7);    rectA.set_height(4);    rectA.set_top(3);    rectA.set_left(2);
    // rectB.set_width(10);    rectB.set_height(6);    rectB.set_top(5);    rectB.set_left(3);

    cout << rectA.get_width() << " " << rectA.get_height() << " " << rectA.get_top() << " " << rectA.get_left() << endl;
    cout << rectB.get_width() << " " << rectB.get_height() << " " << rectB.get_top() << " " << rectB.get_left() << endl;

    cout << "Please enter the name of the rectangle: ";
    cin>> rectName;


    cout << rectName << " is " << rectA.get_age() << " seconds old. \n";

    // initialize squares
    Square sqA; string sqName;
    Square sqB(12, 8, 6);

    cout << sqA.get_side() << " " << sqA.get_top() << " " << sqA.get_left() << endl;

    sqA.set_side(17); sqA.set_top(10); sqA.set_left(9);
    // sqB.set_width(10); sqB.set_height(6); sqB.set_top(5); sqB.set_left(3);

    cout << sqA.get_side() << " " << sqA.get_top() << " " << sqA.get_left() << endl;
    cout << sqB.get_side() << " " << sqB.get_top() << " " << sqB.get_left() << endl;

    cout << "Please enter the name of the square: ";
    cin >> sqName;

    //sqA.set_age(difftime(time(0), sqA.get_tOB()));
    // cout << "You entered " << sqName << endl;
    cout << sqName << " is " << sqA.get_age() << " seconds old. " << endl;
    cout << "The diagonal of " << sqName << " is : " << sqA.get_diagonal() << endl;

    cout << "The perimeter of " << sqName << " is : " << sqA.get_perimeter() << endl;

    cout << "The area of " << sqName << " is : " << sqA.get_area() << endl;

    // Width, Height, Top, Left
    Rectangle intersectRect(6, 10, 5, 5);
    Square intersectSquare;

    cout << intersectSquare.get_side() << " " << intersectSquare.get_top() << " " << intersectSquare.get_left() << endl;

    intersectSquare.set_side(7); intersectSquare.set_top(5); intersectSquare.set_left(6);

    cout << intersectRect.get_width() << " by " << intersectRect.get_height() << " and " << intersectRect.get_top() << " from the top, " << intersectRect.get_left() << " from the left. " << endl;
    cout << intersectSquare.get_side() << " by " << intersectSquare.get_side() << " and "  << intersectSquare.get_top() << " from the top, " << intersectSquare.get_left() << " from the left." << endl;

    cout << "They have an overlapping area of " << intersectSquare.get_intersectArea(intersectRect , intersectSquare) << endl;
    return 0;
}