#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
				vector<string> str;
				vector<string>::iterator it;
				int no_of_str;
				string temp;
				scanf("%d",&no_of_str);
				for (int i=0;i<no_of_str;i++)
				{
								//scanf("%s",&temp);
								cin>>temp;
								str.push_back(temp);
				}
				sort(str.begin(),str.begin()+no_of_str);
				for (it=str.begin();it<str.end();it++)
				{
								cout<<*it<<endl;
				}
			
}
