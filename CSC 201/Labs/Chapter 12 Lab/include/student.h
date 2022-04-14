using namespace std;

class student
{
public:
    student();
    student(string, string, string, string, string);
    student(string, string, string, string, string, float, int);
    void calcGPA();
    void Param_calcGPA(float, int);
    void set_E(float);
    void set_A(int);
    void display() const;

private:
    string first;
    string last;
    string address;
    string city;
    string zip;
    float earned;
    int attempted;
    float gpa;
};

