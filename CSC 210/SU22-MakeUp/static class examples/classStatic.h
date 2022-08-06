#ifndef CLASSSTATIC_H_INCLUDED
#define CLASSSTATIC_H_INCLUDED

class myclass {

 public:
     myclass();
     void printCounter();

 private:
    static int counter;
    int individualCounter;

};

#endif // CLASSSTATIC_H_INCLUDED
