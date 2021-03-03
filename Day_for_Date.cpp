//https://beginnersbook.com/2013/04/calculating-day-given-date/

#include <iostream>
#define cout std::cout
#define cin std::cin

int Key_Value_M(int mm)
{
    switch(mm)
    {
        case 1:
        return 1;
        case 2:
        return 4;
        case 3:
        return 4;
        case 4:
        return 0;
        case 5:
        return 2;
        case 6:
        return 5;
        case 7:
        return 0;
        case 8:
        return 3;
        case 9:
        return 6;
        case 10:
        return 1;
        case 11:
        return 4;
        case 12:
        return 6;
    }
    return 0;
}
int Key_Value_Y(int yyyy)
{
    int y= (yyyy/ 400)% 4;
    if(y==1)
        return 6;
    if(y==2)
        return 4;
    if(y==3)
        return 2;
    return 0;
}
void Day(int No)
{
    switch(No)
    {
        case 0:
            cout<<"Saturday";
        break;
        case 1:
            cout<<"Sunday";
        break;
        case 2:
            cout<<"Monday";
        break;
        case 3:
            cout<<"Tuesday";
        break;
        case 4:
            cout<<"Wednesday";
        break;
        case 5:
            cout<<"Thursday";
        break;
        case 6:
            cout<<"Friday";
        break;
    }
}
int main()
{
    int date= 0, month= 0, year= 0;
    cout<<"\nEnter Date, Month and Year\n"; cin>>date>>month>>year;
    system("cls");
    if(year< 0)
    {
        cout<<"ERROR1";
        return 0;
    }
    cout<<"\nThe Day on "<<date<<"/"<<month<<"/"<<year<<" is ";
    int F= ((year% 100)/ 4);
    F+= date+ Key_Value_M(month);
    if(date< 3 && year% 4 == 0)
        F-= 1;
    F+= Key_Value_Y(year);
    F+= (year% 100);
    Day(F% 7);
    return 0;
}