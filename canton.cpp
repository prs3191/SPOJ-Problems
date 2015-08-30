#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    long long int i=1,j=1,term,test,count=1;
    cin>>test;
    if(test<=20)
    {
      while(test)
      {
        cin>>term;
        if((term >10000000) || term<1){test--;continue;}
       
        while(count<term)
        {
              if(i==1)
              {
                       j++;
                       count++;
                       while(j!=1 && count<term)
                       { /*cout<<i<<"/"<<j<<endl;*/j--;i++;count++;}
                       //cout<<i<<"/"<<j<<endl;
                     // k++;
              }
               else if(j==1)
              {
                      i++;
                      count++;
                      while(i!=1 && count<term)
                      {/*cout<<i<<"/"<<j<<endl;*/j++;i--;count++;}
                     //  cout<<i<<"/"<<j<<endl; 
                    // k++;
              }
        }
         cout<<"TERM "<<term<<" IS "<<i<<"/"<<j<<"\n";      
         i=j=count=1;     
        test--; 
      }
   }
   //getch();
}
