#include<iostream>
using namespace std;
  int n;

void  First_display()
{
  cout<<"\t1.If you wish to change \n\t2.no\n";
  cin>>n;
  if(n==1)
  {
    cout<<"It napa before and after dinner and breakfast.\n";
  }
  else{
   cout<<"continue as before";
   cout<<"continue as before";
  }
}
void  third_display()
{
  cout<<"\t1.If you wish to change \n\t2.no\n";
  cin>>n;
  if(n==1)
  {
    cout<<"It napa before and after dinner and breakfast.\n";
  }
  else{
   cout<<"die die die";

  }
}
int main()
{

  cout<<"Enter your option"<<endl;
  cout<<"\t\t1.Current Medication\n";
  cout<<"\t\t2.New Medication\n";
  cout<<"\t\t3.Formulary\n";
  cin>>n;
  if(n==1)
  {
    First_display();

  }
  if(n==3)
  {
    third_display();

  }
}
