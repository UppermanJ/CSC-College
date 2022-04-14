#include <iostream> // iostream library needed to use the cin and cout methods.



using namespace std;



int main(int argc, char** argv)

 {

    int integerOne = 20;
    int integerTwo = 21;
    float floatOne = 40.44;
    float floatTwo = 50.55;

    cout << endl << endl;
    cout << "------ THE ARITHMETIC OPERATORS ------" << endl;
    cout << endl;
    cout << "Demonstrates the addition operator '+' " << endl;
    cout << "Adding integerOne + integerTwo: " << integerOne << " + " << integerTwo << " = "
                                               << integerOne + integerTwo << endl;
    cout << "Adding floatOne + floatTwo: " << floatOne << " + " << floatTwo << " = "
                                           << floatOne + floatTwo << endl;
    cout << endl;
    cout << "Demonstrates the subtraction operator '-' " << endl;
    cout << "Subtracting integerOne - integerTwo: " << integerOne << " - " << integerTwo << " = "
                                                    << integerOne - integerTwo<< endl;
    cout << "Subtracting floatOne + floatTwo: " << floatOne << " - " << floatTwo << " = "
                                                << floatOne - floatTwo << endl;
    cout << endl;
    cout << "Demonstrates the multiplication operator '*' " << endl;
    cout << "Multiplying integerOne * integerTwo: " << integerOne << " * " << integerTwo << " = "
                                                    << integerOne * integerTwo<< endl;
    cout << "Multiplying floatOne * floatTwo: " << floatOne << " * " << floatTwo << " = "
                                                << floatOne * floatTwo << endl;
    cout << endl;
    cout << "Demonstrates the division operator '/' " << endl;
    cout << "Dividing integerOne / integerTwo: " << integerOne << " / " << integerTwo << " = "
                                                 << integerOne / float(integerTwo)<< endl;
    cout << "Dividing floatOne / floatTwo: " << floatOne << " / " << floatTwo << " = "
                                             << floatOne / floatTwo << endl;
    cout << endl;
    cout << "Demonstrates the modulus operator '%' " << endl;
    cout << "Modulus of integerOne % integerTwo: " << integerOne << " % " << integerTwo << " = "
                                                   << integerOne % integerTwo << endl;
    cout << endl;
    cout << "Demonstrates the increment operator '++' " << endl;
    cout << "Post Incrementing of integerOne++: " << integerOne << "++" << " = "
                                                  << integerOne++ << " "
                                                  << integerOne << endl;
    cout << "Pre Incrementing of ++integerTwo: " << "++" << integerTwo << " = "
                                                 << ++integerTwo << endl;
    cout << endl;
    cout << "Demonstrates the decrement operator '--' " << endl;
    cout << "Post Decrement of integerOne--: " << integerOne << "--" << " = "
                                               << integerOne-- << " "
                                               << integerOne << endl;
    cout << "Pre Decrement of --integerTwo: " << "--" << integerTwo << " = "
                                              << --integerTwo << endl;
    cout << endl << endl;

    return 0;



} // End of method main()



