#include <iostream>
using namespace std;

int main()
{
    int n, x, a, b, c, d;
    int i= 0, j= 0, k= 0, l=0;
    string str= "  ";
    cin>>n;
    cout<<"\n";
    x=(n*2)-1;
    l=x;

    j= n/ 10;
    for(i= 0; i< j; i++)
        str= str+ " ";                     //For an Even Pattern

    for(i=x;i>0;i--)
    {
        k=0;
        for(j=x;j>0;j--)
        {
            a=n+l-x;
            b=n-l+1;
            c=n-k;
            d=n+k-x+1;
            if(i==x)
            {
                cout<<a<<"  ";
            }
            else if(a>=c)
                if(a<1)
                    cout<<b<<str;
                else
                    cout<<a<<str;
            else if(a<c)
            {
                if(c<1)
                    cout<<d<<str;
                else
                    cout<<c<<str;
            }
            k++;
        }
        cout<<"\n";
        l--;
    }
    return 0;
}

//5  5  5  5  5  5  5  5  5
//5  4  4  4  4  4  4  4  4
//5  4  3  3  3  3  3  3  3
//5  4  3  2  2  2  2  2  2
//5  4  3  2  1  1  1  1  1
//5  4  3  2  1  2  2  2  2
//5  4  3  2  1  2  3  3  3
//5  4  3  2  1  2  3  4  4
//5  4  3  2  1  2  3  4  5