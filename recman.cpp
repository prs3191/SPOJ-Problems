#include<iostream>
//#include<conio.h>
#include<stdlib.h>
#define MAX 500001
using namespace std;
int main()
{
    long  long int i;
    long long int *a;
    
    a=new long long int[MAX];
    //if(a!=NULL) cout<<"err";
   long long int *u;
    u=new long long int[5000000];
    //if(u!=NULL) cout<<"err";
    for(i=0;i<=MAX;i++)
    {
      u[i]=0;
    }
    a[0]=0;
    u[0]=1;
    a[1]=1;
    u[1]=1;
    //cout<<"assingned 0";
    for(i=2;i<MAX;i++)
    {
      if((a[i-1]-i)>0)
      {
         if(u[a[i-1]-i]!=1)
         {
           a[i]=a[i-1]-i;
           //cout<<a[i]<<" index:"<<i<<endl;
           u[a[i]]=1;
         }
         else
         {
          a[i]=a[i-1]+i;
        // cout<<a[i]<<" index:"<<i<<endl;
          u[a[i]]=1;
         }
      }
      else
      {
          a[i]=a[i-1]+i;
          //cout<<a[i]<<" index:"<<i<<endl; 
          u[a[i]]=1;
      }
      
    }
   // cout<<"\nend";
    long long int j;
    cin>>j;
    while(j>=0)
    {
       cout<<a[j]<<endl;
       cin>>j;
    }
    //cout<<"bef a";
    delete[] a;
    //cout<<"a del";
    a=NULL;
    delete[] u;
   // cout<<"u de";
    u=NULL;
}
