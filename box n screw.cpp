#include<iostream>
//#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    int box,screw,table,tscrew,sum=0,k;
    //cout<<"\nbox:";
    cin>>box;
    int boxar[box];
    //cout<<"\nscrew:";
    cin>>screw;
   // cout<<"\ntable:";
    cin>>table;
    //cout<<"\nscrew in each box:\n";
    for(int i=0;i<box;i++)
    {
            cin>>boxar[i];
    }
    sort(boxar,boxar+box,greater<int>());
   /* for(int i=0;i<box;i++)
    {
            cout<<"\n"<<boxar[i];
    }*/
    tscrew=table*screw;
  //  cout<<"\ntscrew:"<<tscrew;
    for(k=0;k<box;k++)
    {
            if(sum<tscrew)
            {
                          sum=sum+boxar[k];
                          
            }
            else
            {
               // cout<<"\nsum is:"<<sum;
                break;
            }
    }
    if((sum==tscrew) || (sum>tscrew))
        //cout<<"\nno of boxes:"<<k;
        cout<<k;
    
   // getch();
}
    
    
