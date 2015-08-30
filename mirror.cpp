#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[25];
    char empty[25]="  ";
    int count=0;
    int c;
    cout.flush();
    cout<<"empty:"<<empty;
    int i;
    cout<<"\nstr:";

    for(i=0;;i++)
    {
      cin.clear();
      cin.get(str,25);
      //cin>>str[i];
      cout<<"\n"<<str;
     //cout<<strncmp(str,empty,2);
        for(int j=0;j<2;j++)
        {
              c=str[j];
              if(isspace(c)!=0)
              {
                   if(count==2)
                           break;
                    else
                          count++;
              }
               
        }
     count=0;
     }
    
     
 }
     


