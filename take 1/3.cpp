#include <iostream>
# include <cmath>
using namespace std;

int main()
{
    int characterAge = 24;
    string characterName = "john";
    cout<< "My Name is :"<<characterName<<endl;
    cout<< "My Age is :"<<characterAge<<endl;
    characterName = "ingrid";
    cout<<" Liked the name "<<characterName<<endl;
    cout << "Hello world!" << endl;

    char grade = 'A';
    string phrase = "MUFASA TECH";
    int age = 50;
   // float
    double gpa = 2.3;// decimals
    bool isFemale = true;

    // strings
    cout<< phrase.substr(7,4)<<endl; // output a section in the phrase
    cout<<"Hello my name is faith\n";
    cout<<" I am a Sales manager "<<endl;
     cout<< phrase.find("TECH", 0)<<endl; //finding the index position
    cout<< phrase[5]<<endl;
    cout<< phrase<<endl;
    cout<< phrase.length()<<endl;
   // phrase[9] = 'B'; editing a specific character
   //storing the value of a sub string in another sting
   string phrasesub;
   phrasesub = phrase.substr(7,4);
   cout<< phrasesub<<endl;

   // working with numbers
   //modules model  54:00
     cout<< 10%3 <<endl;
     cout<< pow(2,3)<<endl;
     cout<< sqrt(64)<<endl;
     cout<< round (99.9)<<endl;
     cout<< ceil(2.3)<<endl;
     cout<< floor(2.3)<<endl;
     cout<< fmax(2,3)<<endl;
     cout<< fmin(2,3)<<endl;









    return 0;
}
