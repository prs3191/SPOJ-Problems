#include<iostream>
#include<string.h>
//#include<conio.h>
using namespace std;
int main()
{
    string possib[8]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
    int count[8]={0,0,0,0,0,0,0,0};
    int test,i=1;
    cin>>test;
    if(test>=1 && test<=1000)
    {
       while(test)
       {
         cin>>i;
         string str;
         cin>>str;
         if(str.length()>40){test--;i++;continue;}
         for(int strpos=0;strpos<str.length();strpos++)
         {
           for(int j=0;j<8;j++)
           {
             if(strcmp(str.substr(strpos,3).data(),possib[j].data())==0)
             {
                //cout<<"\n"<<str.substr(strpos,3);
                count[j]++;
                break;
             }
           }
         }
         cout<<i;
         for(int j=0;j<8;j++)
         {
           cout<<" "<<count[j];
           count[j]=0;
         }
         cout<<"\n";
         i=0;;
         test--;
       }
    }
    //getch();
}
