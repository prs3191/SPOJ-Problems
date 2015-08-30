#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    float in,sum,i;
    int count;
    while(1)
    {
      
      cin>>in;
      if(in==0.00) break;
      if(in<0.01 || in>5.20) continue;
      
      sum=0.00;
      i=2.00;
      count=0;
      while(sum<in)
      {
        sum=sum+(1/i);
        //cout<<sum<<endl;
        i++;
        count++;
      }
      cout<<count<<" card(s)\n";
      
    }
}
