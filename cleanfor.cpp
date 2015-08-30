#include<iostream>
//#include<conio.h>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
    int test,i,tempos;
    vector<string> vec;
    vector<string>::iterator it;
    cin>>test;
    cin.ignore();
    cin.clear();
    while(test)
    {
       i=0,tempos=0;
       string str;
       char tempstr[100];
       getline(cin,str,'\n');
       if(str[0]==' '){test--;continue;}
       if(str[str.length()-1]==' '){test--;continue;}
       //cout<<str<<endl;
       for(i=0;i<str.length();i++)
       {
          
          if(!(isspace(str[i])))
          {
            tempstr[tempos]=str[i];
            //cout<<"\ntempstr:"<<tempstr;
            tempos++;
            
          } 
          else
          {
             tempstr[tempos]='\0'; 
             //cout<<"\ntempstr:"<<tempstr;
             vec.push_back(tempstr);
           // cout<<"\ntempstr pushed:"<<tempstr;
                                        
            memset(tempstr,'\0',100);
             while(isspace(str[i]))
             {
                vec.push_back(" ");
                //cout<<"\ntempstr1 pushed:"<<tempstr;
                i++;
             }
             i--;
             tempos=0;
          }
       }
       tempstr[tempos]='\0'; 
       vec.push_back(tempstr);
       //cout<<"\ntempstr pushed:"<<tempstr<<endl;
       for(it=vec.begin();it<vec.end();it++)
       {
          if(*it=="8")
          {cout<<"ate";}
          else if(*it=="w8")
          {cout<<"wait";}
          else if(*it=="gr8")
          {cout<<"great";}
          else if(*it=="4")
          {cout<<"for";}
          else if(*it=="b4")
          {cout<<"before";}
          else
          cout<<*it;
       }
       cout<<endl;
       vec.clear();
    test--;
   }
  // getch();
}

