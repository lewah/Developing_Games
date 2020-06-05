#include <iostream>

using namespace std;

int main()
{
    string phrase = "Greatest is: ";
    int a,b;


    cout << "Enter values :" << endl;
    cin>> a >> b;
    cout<< "Your value is "<<a + b<<endl;

   if(a>b){
     cout<< phrase<<a<<endl;
   }
   else{
    cout<< phrase<<b<<endl;
   }


    return 0;
}

