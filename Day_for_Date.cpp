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
void Day(int No)
{
    switch(No)
    {
        case 0:
            cout<<"Sunday";
        break;
        case 1:
            cout<<"Monday";
        break;
        case 2:
            cout<<"Monday";
        break;
        case 3:
            cout<<"Monday";
        break;
        case 4:
            cout<<"Monday";
        break;
        case 5:
            cout<<"Monday";
        break;
        case 6:
            cout<<"Monday";
        break;
    }
}
int main()
{
    int choice= 0, date= 0, month= 0, year= 0;
    cout<<"Enter Method Choice\n1. Zeller\'s Method\n2. Key-Value Method";  cin>>choice;
    system("cls");
    cout<<"\nEnter Date, Month and Year\n"; cin>>date>>month>>year;
    cout<<"\nThe Day on "<<date<<"/"<<month<<"/"<<year<<" is ";
    switch (choice)
    {
    case 1:
        Day(Zeller(date, month, year));
    return 0;
    case 2:
        /*code*/
    return 0;
    default:
        cout<<"ERROR2";
    return 0;
    }
}