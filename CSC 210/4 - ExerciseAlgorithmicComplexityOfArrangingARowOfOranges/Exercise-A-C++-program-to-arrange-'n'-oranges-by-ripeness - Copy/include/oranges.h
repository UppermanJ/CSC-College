#ifndef ORANGES_H
#define ORANGES_H

class oranges
{
private:
    string orangeLocal = "Oranges.txt";
    float Oranges[10] = {};
    int loopCounter = 0;
    int executionCounter = 0;
    int iteration = 0;

public:
    oranges();

    void showOranges();
    void readOranges();
    void arrangeNOrangesByRipeness();
};

#endif