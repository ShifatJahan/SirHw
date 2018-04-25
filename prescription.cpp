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
  }
}
     string str[20];
    string st[3]={"Ace Plus", "Seclo","Neuoceptin"};
void Second_display()
{

   //cout<<"\t1.Ace plus \n\t2.Seclo\n\t3.Neuoceptin";
  cin>>str;
  for(int i=0;i<2;i++){
  if(str==st[0])
  {
    cout<<"It napa before and after dinner and breakfast.\n";
  }
  else if (str==st[1]){
   cout<<"continue as before";
  }
  else{
    cout<<"nothing to show";
  }
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
  else if(n==2)
  {
      Second_display();
  }
}
