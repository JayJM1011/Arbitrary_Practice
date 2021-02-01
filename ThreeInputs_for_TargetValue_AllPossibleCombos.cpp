#include <iostream>
using namespace std;

int main()
{
    int No= 0, posi1= 0, posi2= 0, posi3= 0;
    float tar= 0.0, x= 0.0, y= 0.0, z= 0.0, add= 0.0;
    float a[999];
    int i= 0, j= 0, k= 0, l= 0;
    cout<<"No. of Inputs?\n";   cin>>No;            //<Inputs>
    cout<<"\nEnter your inputs\n";
    for(i= 0; i< No; i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter your target\n";  cin>>tar;       //</Inputs>
    for(i= 0; i< No; i++)
    {
        for(int j= i; j< No; j++)
        {
            for(int k= i; k< No; k++)
            {
                if(i==j || i==k || j==k)
                    break;
                x=a[i];
                y=a[j];
                z=a[k];
                add= x+ y+ z;
                if(add==tar)
                {
                    posi1= i;
                    posi2= j;
                    posi3= k;
                    cout<<"\n["<<posi3<<", "<<posi1<<", "<<posi2<<"]";
                }
            }
        }
    }
    return 0;
}