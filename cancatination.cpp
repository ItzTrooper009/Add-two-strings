#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
  char fname[20],sname[20];
  cout<<"\n\tEnter your name ";
  cin>>fname;
  cout<<"\n\tEnter surname ";
  cin>>sname;
  strcat(fname," ");
  strcat(fname,sname);
  cout<<"\n\tYour full name is "<<fname;
  getch();
  return 0;
}
