#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct PersonRec{
    string firstName;
    string lastName;
    int age;
    int height;
    float weight;
};

int main(){

    PersonRec fiftyPeople[50];
    ifstream read;
    int count = 0;
    int i = 0;

    read.open("data.txt");
    cout << count;
    while (read >> fiftyPeople[i].firstName >> fiftyPeople[i].lastName >> fiftyPeople[i].age >> fiftyPeople[i].height >> fiftyPeople[i].weight){
        i++;
        count++;
        cout << count;
    }

    cout << count;
        return 0;
}