#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;


const int MAX = 2;

enum movieRating
{
    G,
    PG,
    PG_13,
    R,
    NC_17
};

struct movie
{
    string movieName;
    movieRating rating;
    int yearProduced;
    string headliner;
    string hasSeen;
    string didLike;
};

void thisFunctionDoesTwo(movie[], int&, string&);

int main(){

    movieRating MPAA;
    movie oneFilm, twoFilm[MAX];
    int ratingPlacement = 0;
    string ratingMessage;

    cout << "Movie Title: ";
    getline(cin, oneFilm.movieName);
    cout << "1 - G" << endl;
    cout << "2 - PG" << endl;
    cout << "3 - PG-13" << endl;
    cout << "4 - R" << endl;
    cout << "5 - NC-17" << endl;
    cout << "MPAA Rating: ";
    cin >> ratingPlacement;
    cin.get();
    oneFilm.rating = movieRating(ratingPlacement - 1); 
    cout << "Year Released: ";
    cin >> oneFilm.yearProduced;
    cin.get();
    cout << "Lead Actor: ";
    getline(cin, oneFilm.headliner);
    cout << "Did you see it? (Y/N): ";
    getline(cin, oneFilm.hasSeen);
    cout << "Like it? (Y/N): ";
    getline(cin, oneFilm.didLike);

    switch (oneFilm.rating)
    {
    case G:
        ratingMessage = "This movie is rated G:  General Audiences";
        break;
    case PG:
        ratingMessage = "This movie is rated PG : Parental Guidance Suggested";
        break;
    case PG_13:
        ratingMessage = "This movie is rated PG-13:  Parent's Strongly Cautioned";
        break;
    case R:
        ratingMessage = "This movie is rated R:  Under 17 requires accompanying adult or adult guardian";
        break;    
    case NC_17:
        ratingMessage = "This movie is rated NC-17: No one under 17 and under admitted";
            break;
    default : break;
    }

    cout << "Title: " << oneFilm.movieName << " Year: " << oneFilm.yearProduced << endl;
    cout << "MPAA: " << ratingMessage << " Lead Actor: " << oneFilm.headliner << endl;
    cout << "User Seen: " << oneFilm.hasSeen << "User Enjoyed: " << oneFilm.didLike << endl;

    thisFunctionDoesTwo(twoFilm, ratingPlacement, ratingMessage);
    return 0;
}

void thisFunctionDoesTwo(movie dosPelicula[], int& enumValue, string& messageMPAA){

    for(int i = 0; i < MAX; i++){
        cout << "Movie Title: ";
        getline(cin, dosPelicula[i].movieName);
        cout << "1 - G" << endl;
        cout << "2 - PG" << endl;
        cout << "3 - PG-13" << endl;
        cout << "4 - R" << endl;
        cout << "5 - NC-17" << endl;
        cout << "MPAA Rating: ";
        cin >> enumValue;
        cin.get();
        dosPelicula[i].rating = movieRating(enumValue - 1);
        cout << "Year Released: ";
        cin >> dosPelicula[i].yearProduced;
        cin.get();
        cout << "Lead Actor: ";
        getline(cin, dosPelicula[i].headliner);
        cout << "Did you see it? (Y/N): ";
        getline(cin, dosPelicula[i].hasSeen);
        cout << "Like it? (Y/N): ";
        getline(cin, dosPelicula[i].didLike);

        switch (dosPelicula[i].rating)
        {
        case G:
            messageMPAA = "This movie is rated G:  General Audiences";
            break;
        case PG:
            messageMPAA = "This movie is rated PG : Parental Guidance Suggested";
            break;
        case PG_13:
            messageMPAA = "This movie is rated PG-13:  Parent's Strongly Cautioned";
            break;
        case R:
            messageMPAA = "This movie is rated R:  Under 17 requires accompanying adult or adult guardian";
            break;
        case NC_17:
            messageMPAA = "This movie is rated NC-17: No one under 17 and under admitted";
            break;
        default:
            break;
        }
    }

    for(int i = 0; i < MAX; i++){
        cout << "Title: " << dosPelicula[i].movieName << " Year: " << dosPelicula[i].yearProduced << endl;
        cout << "MPAA: " << messageMPAA << " Lead Actor: " << dosPelicula[i].headliner << endl;
        cout << "User Seen: " << dosPelicula[i].hasSeen << "User Enjoyed: " << dosPelicula[i].didLike << endl;
    }
}