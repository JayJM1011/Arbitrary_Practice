#include <iostream>
#define cout std::cout
#define cin std::cin
int Zeller(int dd, int mm, int yy)
{

    return 0;
}
int Key_Value()
{
    return 0;
}
void Day(int dd)
{

}
int main()
{
    int choice= 0, date= 0, month= 0, year= 0;
    cout<<"Enter Method Choice\n1. Zeller\'s Method\n2. Key-Value Method";  cin>>choice;
    cout<<"Enter Date, Month and Year"; cin>>date>>month>>year;
    switch (choice)
    {
    case 1:
        Zeller(date, month, year);
    return 0;
    case 2:
        /*code*/
    return 0;
    default:
        cout<<"ERROR2";
    return 0;
    }
}