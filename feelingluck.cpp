#include<iostream>
//#include<conio.h>
#include<string>
#include<sstream>
#include<stdlib.h>
using namespace std;
int main()
{
    int test,max,count,luck,cas=0,i,tempmax;
    string str[10],url,tempurl,tempstr;
    cin>>test;
    cin.ignore();
    cin.clear();
    while(test)
    {
        max=0;count=10;luck=0;i=0;tempmax=0;
        while(count)
        {
            getline(cin,url,'\n');
            istringstream ss(url,istringstream::in | istringstream::out);
            ss>>tempstr;
            tempurl=tempstr;
            ss >> tempstr;
            tempmax=atoi(tempstr.data());
            if(tempurl.length()>=1 && tempurl.length()<=100 && tempmax>=1 && tempmax<=100  )
            {
                
                if(tempmax>max )
                {
                     str[i]=tempurl;
                     max=tempmax;
                     //cout<<"\nin array pos:"<<i<<" stin is:"<<str[i]<<"\n";
                     //luck++;
                    // i++;
                }
                else if(tempmax==max)
                {
                     ++i;
                     str[i]=tempurl;
                     //cout<<"\nin array:"<<i<<" stin is:"<<str[i]<<"\n";
                     //luck++;
                }
            }    
            ss.clear();
            tempstr.clear();
            tempmax=0;
            count--;
        }
        cas++;
        cout<<"Case #"<<cas<<":\n";
        for(int j=0;j<=i;j++)
        {
                cout<<str[j]<<"\n";
                str[j].clear();
        }
        
        test--;
    }
    //getch();
}
    
