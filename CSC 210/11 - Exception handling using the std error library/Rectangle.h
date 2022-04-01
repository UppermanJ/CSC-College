#ifndef RECTANGLE_H
#define RECTANGLE_H

// Class Definition
class Rectangle
{

    float width, height, angle;
    int top, left;

    double *ageInSeconds, *myDblArray;
    time_t timeOfBirth;

    bool lockAspectRatio;

    float calc_factor(float p);



public:
    ~Rectangle();
    Rectangle();
    Rectangle(float w, float h);
    Rectangle(float w, float h, float t, float l);
    Rectangle(float w, float h, float t, float l, float a);

    void set_width(float w);
    void set_height(float h);
    void set_top(float t);
    void set_left(float l);
    void set_angle(float a);
    void set_age(double a);

    void move(int top_change, int left_change);
    void rotate90();
    void expand(int pct, bool lockAspectRatio);

    void create_array(int s);
    void display_array(int s);

    float get_width();
    float get_height();
    float get_top();
    float get_left();
    float get_area();
    float get_diagonal();
    float get_perimeter();
    float get_angle();

    time_t get_tOB();

    double get_age();

};

#endif