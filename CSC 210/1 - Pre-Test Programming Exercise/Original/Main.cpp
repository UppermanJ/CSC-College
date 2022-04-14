#include "preTestExercise.h"

using namespace std;

int main() {
    int intMainWhileLoop = 1;
    while (intMainWhileLoop > 0)
    {
        dataSet Set;
        char selection = ' ';
        Set.dataScreen();
        cout << "Use text file instead of user input? (y/n): ";
        cin >> selection;
        // cin.ignore(' ');
        switch (selection)
        {
        default:
        case 'Y':
        case 'y':
            Set.textFileMethod();
            break;
        case 'N':
        case 'n':
            Set.userInputMethod();
            break;
        }
        Set.avgAll();
        Set.max();
        Set.min();
        Set.avgMinMax();
        Set.deviationMinMaxFromAll();
        Set.dataSetFeedback();

        Set.dataScreen();
        Set.exitQuery(intMainWhileLoop);
    }

    return 0;

}


