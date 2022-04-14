#ifndef SQUARE_HPP
#define SQUARE_HPP
#include"Rectangle.hpp"
//#include"LinkedList.hpp"

using namespace std;

/*
Derived class Square with base class Rectangle.
Syntax for 1st line of class definition:
class DerivedClass: public BaseClass
*/

class Square: public Rectangle
{
public:

    //Default constructor
    Square(): Rectangle(){
        /* No code since members initialized in base class Rectangle */
    }
    /*
    Constructor for derived class Square.
    Because Square is a derived class of Rectangle,
    we can use this syntax  to call the base class's constructor:
    DerivedClass(datatypes parameters): BaseClass(parameters){ . . . }
    */
    Square(float side) : Rectangle(side, side)
    {
        /* No code since members initialized in base class Rectangle */
    }
    Square(float side, float top,float left) : Rectangle(side, side, top, left)
    {
        /* No code since members initialized in base class Rectangle */
    }
    Square(float side, float top, float left,float hAng) : Rectangle(side, side, top, left, hAng)
    {
        /* No code since members initialized in base class Rectangle */
    }


    /*
    returns the name of class
    overrides Rectangle's name() function
    */
    char const * name() const{
        return "Square";
    }
    //new set function
    void set_side(double side){
        /*
        use Rectangle's setLength() and setWidth() functions,
        to set both length and width to same value
        */
       Rectangle::set_height(side);
       Rectangle::set_width(side);
    }
    // override Rectangle's sset function for proper Square behavior
    void set_height(float height2){
        set_side(height2);
    }
    // override Rectangle's sset function for proper Square behavior
    void set_width(float width2){
        set_side(width2);
    }
    void set_top(float t){Rectangle::set_top(t);}
    void set_left(float l){Rectangle::set_left(l);}
    void set_angle(float a){Rectangle::set_angle(a);}

    // get function
    float get_side(){
        //use Rectangle's get_lentgth() function
        return Rectangle::get_width();
    }

    float get_angle(){return Rectangle::get_angle();}
    float get_width(){return get_side();}
    float get_height(){return get_side();}
    float get_top(){return Rectangle::get_top();}
    float get_left(){return Rectangle::get_left();}

    float get_diagonal();
    float get_perimeter();

    float get_intersectArea(Rectangle rectangle, Square square) {
        // The distance between the leftmost shape and the right shape
        float leftPointOffset = 0.0;// = (rectangle.get_left() - square.get_left());
        // The distance between the topmost shape and the lower shape
        float topPointOffset = 0.0;// = (rectangle.get_top() - square.get_top());
    
        // When the top left corner of each is overlapping
        if((rectangle.get_top() == square.get_top()) && (rectangle.get_left() == square.get_left())){
            // When the two overlap perfectly
            if((square.get_side() == rectangle.get_height()) && (square.get_side() == rectangle.get_width())){
                return 0.0;
            }else // When at least one dimension is larger
            if (((square.get_side() > rectangle.get_height()) && (square.get_side() >= rectangle.get_width())) ||
                ((square.get_side() >= rectangle.get_height()) && (square.get_side() > rectangle.get_width())))
            {
                return (square.get_area() - rectangle.get_area());
            }else{return (rectangle.get_area() - square.get_area());} // When at least one dimension is larger
        }

        if (rectangle.get_left() < square.get_left())
        {
            leftPointOffset = (square.get_left() - rectangle.get_left());
        }else{
            leftPointOffset = (rectangle.get_left() - square.get_left());
        }

        if (rectangle.get_top() < square.get_top())
        {
            topPointOffset = (square.get_top() - rectangle.get_top());
        }
        else
        {
            topPointOffset = (rectangle.get_top() - square.get_top());
        }

        // When the square's top left corner is further right than rectangle
        if (square.get_left() > rectangle.get_left())
        {
            // When the tops are equal
            if ((square.get_top() == rectangle.get_top()))
            {
                // When the area to the right of the leftpointoffset overlaps perfectly
                if((square.get_side() == rectangle.get_height()) &&
                    square.get_side() == (rectangle.get_width() - leftPointOffset))
                {
                    return square.get_area();
                }else

                // When the area to the right of the leftpointoffset 
                if ((square.get_side() > rectangle.get_height()) &&
                    square.get_side() >= (rectangle.get_width() - leftPointOffset))
                {
                    return ((rectangle.get_height()) * (rectangle.get_width() - leftPointOffset));
                }else
                // When the area to the right of the leftpointoffset is 
                if ((square.get_side() < rectangle.get_height()) &&
                    square.get_side() <= (rectangle.get_width() - leftPointOffset))
                {
                    return square.get_area();
                }else
                // When the area to the right of the leftpointoffset is 
                if ((square.get_side() < rectangle.get_height()) &&
                    square.get_side() >= (rectangle.get_width() - leftPointOffset))
                {
                    return ((square.get_height()) * (rectangle.get_width() - leftPointOffset));
                }else
                // When the area to the right of the leftpointoffset is 
                if ((square.get_side() > rectangle.get_height()) &&
                    square.get_side() <= (rectangle.get_width() - leftPointOffset))
                {
                    return ((rectangle.get_height()) * (square.get_side()));
                }else

                // When the area to the right of the leftpointoffset 
                if ((square.get_side() >= rectangle.get_height()) &&
                    square.get_side() > (rectangle.get_width() - leftPointOffset))
                {
                    return ((rectangle.get_height()) * (rectangle.get_width() - leftPointOffset));
                }else
                // When the area to the right of the leftpointoffset is 
                if ((square.get_side() <= rectangle.get_height()) &&
                    square.get_side() < (rectangle.get_width() - leftPointOffset))
                {
                    return square.get_area();
                }else
                // When the area to the right of the leftpointoffset is 
                if ((square.get_side() <= rectangle.get_height()) &&
                    square.get_side() > (rectangle.get_width() - leftPointOffset))
                {
                    return ((square.get_height()) * (rectangle.get_width() - leftPointOffset));
                }else
                // When the area to the right of the leftpointoffset is 
                if ((square.get_side() >= rectangle.get_height()) &&
                    square.get_side() < (rectangle.get_width() - leftPointOffset))
                {
                    return ((rectangle.get_height()) * (square.get_side()));
                }
            }
        }
    }
    //float get_intersectArea(Square square1, Square square2) {}
    //float get_intersectArea(Rectangle rectangle1, Rectangle rectangle2) {}
};
#endif
