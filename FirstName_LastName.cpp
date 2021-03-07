//getline(cin, string) is the way to cin till an enter
#include <iostream>
#include <string>
#define string std::string
#define cout std::cout
#define cin std::cin
#define getline std::getline

int main()
{
    string Full= "", First= "", Last= "";
    cout<<"Enter Full Name\t";
    getline(cin, Full);
    int i= 0;
    for(; (Full[i] != ' '); i++)
        First+= Full[i];
    i++;
    for(; i< Full.length(); i++)
        Last+= Full[i];
    cout<<"\n"<<First<<"\n"<<Last;
    return 0;
}