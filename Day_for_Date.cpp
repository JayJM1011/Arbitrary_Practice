#include <iostream>
#define cout std::cout
#define cin std::cin
int Zeller(int dd, int mm, int yy)
{
    int F= 0;
    F= dd+ (((13* mm)- 1)/ 5);
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
            cout<<"Tuesday";
        break;
        case 3:
            cout<<"Wednesday";
        break;
        case 4:
            cout<<"Thursday";
        break;
        case 5:
            cout<<"Friday";
        break;
        case 6:
            cout<<"Saturday";
        break;
    }
}
int main()
{
    int choice= 0, date= 0, month= 0, year= 0;
    cout<<"Enter Method Choice\n1. Zeller\'s Method\n2. Key-Value Method";  cin>>choice;
    system("cls");
    cout<<"\nEnter Date, Month and Year\n"; cin>>date>>month>>year;
    if(year< 0)
    {
        cout<<"ERROR1";
        return 0;
    }
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