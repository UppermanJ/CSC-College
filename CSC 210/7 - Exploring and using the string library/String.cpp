#include <iostream>
#include <string>

using namespace std;


int main(){
  
   string firstname;
   string lastname;
   string address;
   string s1;  

   firstname = "Joe";
   lastname = "Schmuckatelli";
   address = "123 Main St.";
   s1 = firstname;	// s1 is now "Joe" also

   cout << firstname << endl;
   cout <<lastname << endl;
   cout << address << endl;
   cout << s1 <<endl;

   string s2 = "How are you?";
   string s3 = "I am fine.";
   string s4 = "The quick brown duck jumped over the lazy octopus";

   string fname("Marvin");
   string lname("Dipwart");
   string Fname(fname + " " + lname); // s2 is created as a copy of s1

   cout << s2 << endl;
   cout << s3<< endl;
   cout << s4<< endl;
   cout << fname<< endl;
   cout << lname<< endl;
   cout << Fname<< endl;

   if (Fname == (fname + " " + lname))
      cout << "The strings are the same";

   if (Fname < (fname + " " + lname))
      cout << "s1 comes first lexicograpically";

   if (Fname == "Joe")
      cout << "The first student is Joe";

   if (Fname > "apple")
      cout << "s2 comes after apple in the dictionary";

   string d1 = "Fish";
   string d2 = "bait";
   string d3;

   d3 = d1 + d2; // s3 is now "Fishbait"

   string d4 = d3 + " odor"; // s4 is now "Fishbait odor"

   string t1 = "Bird";
   string t2 = "Boogie";

   cout << d1 << endl;
   cout << d2<< endl;
   cout << d3 << endl;
   cout << d4<< endl;
   cout << t1<< endl;
   cout << t2<< endl;

   t1 += "brain"; // t1 is now "Birdbrain"
   cout << t1<< endl;

   t1 += " ";
   cout << t1<< endl;

   t1 += t2; // t1 is now "Birdbrain Boogie"
   cout << t1<< endl;

   string e1 = "Hello, world";
   string e2 = "Goodbye, cruel";

   cout << e1;            // prints "Hello, world"
   cout << e2 + " world"; // prints "Goodbye, cruel world"

   string r3;
   cin >> r3; // will read one word

   string g1 = "Apple pie and ice cream";
   cout << g1[0]; // prints 'A'
   cout << g1[4]; // prints 'e'

   g1[4] = 'y';
   g1[8] = 'g';
   cout << g1; // prints "Apply pig and ice cream"	


   string u1 = "Greetings, earthling";
   string u2 = u1.substr(11,5);		// s2 is now "earth"
   string u3 = u1.substr(4);		// s2 is now "tings, earthling"
 

  u1.append(", " + g1);
  cout << u1;
}