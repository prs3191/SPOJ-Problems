#include<iostream>
//#include<conio.h>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string str,tempstr;
    char first;
    int flag;
    while(1)
    {
            flag=0;
            getline(cin,str,'\n');
            istringstream ss(str,istringstream::in | istringstream::out);
            ss>>tempstr;
            if(tempstr=="*") break;
            first=tolower(tempstr[0]);
            while(ss>>tempstr)
            {
              if(first!=tolower(tempstr[0]))
              {
                  flag=1;
                  break;
              }
            }
            if(flag==1)
                cout<<"N\n";
            else
                cout<<"Y\n";
                ss.clear();
                tempstr.clear();
    }
    //getch();
}
