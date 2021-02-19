#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int length= 0, width= 0, Much= 0;
    int x= 0, y= 0, NoOfHits= 0;
    int i= 0, j= 0, k= 0, m= 0, n= 0; 
    bool xi= true, yi= true;
    cout<<"Enter the Length of the Pool Table\n";       cin>>length;
    cout<<"Enter the Width of the Pool Table\n";        cin>>width;
    cout<<"\nEnter the Start point as X & Y Coordinates\n";     cin>>x; cin>>y;
    if(x==width)
        x--;
    if(y==length)
        y--;
    cout<<"\nEnter No. of Hits to be Recorded\n";       cin>>Much;
    for(i= 0; i<1000;i++)
    {
        cout<<"\n";
        m=x;    n=length- y+ 1;
        for(j= 0; j<=length+ 1; j++)
        {
            for(k= 0; k<=width+ 1; k++)
            {
                if(j==0)
                    cout<<"___";
                else
                    break;
            }
            if(j==0)
                cout<<"\n";
            for(k= 0; k<=width; k++)
            {
                if(k==0)
                    cout<<"| ";
                if(j==n && k==m)
                    cout<<" @ ";
                else
                    cout<<"   ";
                if(k==width)
                    cout<<" |";
            }
            cout<<"\n";
            for(k= 0; k<=width+ 1; k++)
            {
                if(j==length+ 1)
                    cout<<"___";
                else
                    break;
            }
        }
        NoOfHits--;
        if(NoOfHits==Much-1)
            break;
        sleep(1.5);
        system("cls");
        cout<<"\n";

        if(xi&&yi)
        {
            x++;
            y++;
            if(x==width)
            {
                xi=false;
                cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
            if(y==length)
            {
                yi=false;
                if(x!=width)
                {
                    cout<<"\nPoint of hit is "<<x<<", "<<y;
                    NoOfHits++;
                }
                if(Much==NoOfHits)
                    break;
            }
        }
        else if(xi==true && yi==false)
        {
            x++;
            y--;
            if(x==width)
            {
                xi=false;
                cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
            if(y==0)
            {
                yi=true;
                if(x!=width)
                {
                    cout<<"\nPoint of hit is "<<x<<", "<<y;
                    NoOfHits++;
                }
                if(Much==NoOfHits)
                    break;
            }
        }
        else if(xi==false && yi==true)
        {
            x--;
            y++;
            if(x==0)
            {
                xi=true;
                cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
            if(y==length)
            {
                yi=false;
                if(x!=0)
                {
                    cout<<"\nPoint of hit is "<<x<<", "<<y;
                    NoOfHits++;
                }
                if(Much==NoOfHits)
                    break;
            }
        }
        else
        {
            x--;
            y--;
            if(x==0)
            {
                xi=true;
                cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
            if(y==0)
            {
                yi=true;
                if(x!=0)
                {
                    cout<<"\nPoint of hit is "<<x<<", "<<y;
                    NoOfHits++;
                }
                if(Much==NoOfHits)
                    break;
            }
        }
        NoOfHits++;
    }
    return 0;
}