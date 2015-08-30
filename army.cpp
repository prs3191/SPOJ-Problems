#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int D;
    int i,j,temp;
    int x=1;
    //cout<<"no of test cases\n";
    cin>>D;
    long int B;
    do
    {
    //cout<<"no of div of B\n";
    cin>>B;
   long long int b[B];
    for(i=0;i<B;i++)
                    cin>>b[i];
    int M;
    //cout<<"no of div of M\n";
    cin>>M;
    long long int m[M];
    for(i=0;i<M;i++)
                    cin>>m[i];
    /*for(i=0;i<B;i++)
    {
                    for(j=i+1;j<B;j++)
                    
                    if(b[i]<b[j])
                    {
                                temp=b[i];
                                b[i]=b[j];
                                b[j]=temp;
                    }
    }
    for(i=0;i<M;i++)
    {
                    for(j=i+1;j<M;j++)
                    
                    if(m[i]<m[j])
                    {
                                temp=m[i];
                                m[i]=m[j];
                                m[j]=temp;
                    }
    }*/
    
    sort(b,b+B,greater<long long int>());
    sort(m,m+M,greater<long long int>());
    
   /*   cout<<"SORTED\n";                         
    for(i=0;i<B;i++)
    {
                    cout<<b[i];
                    cout<<"\n";
    }                 
    cout<<"\n";      
    for(i=0;i<M;i++)
    {
                    cout<<m[i];
                    cout<<"\n";
    }*/
                    for(i=0,j=0;i<B&&j<M;i++)
                    {
                                    if(b[i]>m[j])//checking greatest army
                                    {
                                                cout<<"Bajtocja\n";
                                                break;
                                    }
                                    
                                    
                                      else if(b[i]==m[j])
                                    {
                                                      j++;
                                    }
                                    
                                     else
                                     {
                                                cout<<"Megabajtolandia\n";
                                                break;
                                     }
                                   
                                    
                                    
                    
                                    
                                     
                    }
                                     if(j==M&&i==B)//if both reaches end
                                     {
                                             cout<<"Draw\n";
                                              
                                     }
                                     else if(j==M || i==B)
                                     {
                                                  if(j==M)//only M out of div
                                                  {
                                                  cout<<"Bajtocja\n";
                                                  }
                                                  else//only B out of div
                                                  {
                                                   cout<<"Megabajtolandia\n";
                                                   }
                                     }         
                                                                       
                                     
                    x++;
                                     
    }while(x<=D);
    
}
                    
