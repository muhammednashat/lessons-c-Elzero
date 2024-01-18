#include <iostream>
#include <limits>
#include<array>
#include<cstring>
#include<vector>

using namespace std;

int main(){

vector <int> newAr = {100,200,300,400};
for (int i = 0; i < newAr.size(); i++)
{
    cout << newAr.at(i) << "\n";
}
 newAr.push_back(500);
 cout << newAr.at(0) << "\n";
 cout << newAr.at(newAr.size() - 1) << "\n";

 cout << "\n\n\n";
    return 0;
}

 /*


Assignment 01
int main(){

vector <int> newAr = {100,200,300,400};
for (int i = 0; i < newAr.size(); i++)
{
    cout << newAr.at(i) << "\n";
}
 newAr.push_back(500);
 cout << newAr.at(0) << "\n";
 cout << newAr.at(newAr.size() - 1) << "\n";

 cout << "\n\n\n";
    return 0;
}


Assignment 02



Assignment 04



Assignment 05


Assignment 06



Assignment 07



Assignment 09


Assignment 10



Assignment 11


*/

