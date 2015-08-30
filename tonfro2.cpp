#include<iostream>
//#include<conio.h>
#include<string>
using namespace std;
int main()
{
    int cols,length,rows,i,j,k,rem;
    string text;
    
    
   
    while(1)
    {
            i=0;j=0;k=0;
           // cout<<"\nno of cols:";
            cin>>cols;
            if(cols==0) break;
            if(cols<2 || cols>20) continue;
           // cout<<"\nenter text";
            cin>>text;
            //cout<<"text entered:"<<text;
            while(islower(text[i]))
            {
               i++;
            }
            if(i<text.length()) continue;
            i=0;
               
            length=text.length();
            if(length>200) continue;
           // cout<<"\nlength:"<<length;
            rows=length/cols;
          //  cout<<"\nrows:"<<rows;
            rem=length%cols;
           // cout<<"\nrem;";
            if(rem<cols && rem!=0)
            { 
               rows++;
             //  cout<<"\nrows:"<<rows;
            }
                                  
           char arr[rows][cols];
            for(;i<rows;)
           {
                    if(j==0)
                    {
                        for(;j<cols;j++)
                        {
                                 if(k>length) break;    
                                     arr[i][j]=text[k];
                                     k++;
                           
                        }
                    }
                    if(j==cols)
                    {
                        j--;
                        i++;
                        for(;j>=0;j--)
                        {
                                      if(k>length) break;  
                                     arr[i][j]=text[k];
                                     k++;
                        }
                    }
                    j=0;
                    i++;
           }
           k=0;
           //cout<<"\n";
           /*for(i=0;i<rows;i++)
           {
                              for(j=0;j<cols;j++)
                              {
                                                 cout<<arr[i][j]<<"\t";
                              
                              }
                              cout<<"\n";
           }*/
          //  cout<<"\n\n";
           for(j=0;j<cols;j++)
           {
                              for(i=0;i<rows;)
                              {
                                        
                                      if(arr[i][j]==NULL)
                                      {
                                          i++;
                                      } 
                                      else
                                      {
                                          
                                      cout<<arr[i][j];
                                        i++;
                                        k++;
                                      }
                              }
           }
           cout<<endl;
         i=0;      
    }
   // getch();
}
