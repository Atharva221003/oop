#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 
  map<string, int> mp;
  map<string, int>::iterator itr; 
  
class state
{

public:
     string st;
     int pop;
     void accept()
     {      
              state s;
              cout<<"\nEnter the state name:";
              cin>>s.st;
              cout<<"\nEnter the population:";
              cin>>s.pop;
              mp[s.st]=s.pop;
        }
     
        void display()
        {  
        cout << "\tState Name\t\tPopulation\n"; 
        for (itr = mp.begin(); itr != mp.end(); ++itr) 
         { 
            cout << '\t' << itr->first 
             << '\t' << itr->second << '\n';  
         }
        
        }
   };
  
 int main() 
{ 
  int n;
  int ch;
    
  state s;
  
  cout<<"\n Enter choice \n1)Insert & Display \n2)Search\n";
  cin>>ch;
  
  switch(ch)
  {
  case 1: 
  cout<<"How many state data u wamt to enter\n";
  cin>>n;
  for(int j=0;j<n;j++)
  {
      s.accept();
   }
   s.display();
     
 case 2: 

 string st1;
          cout<<"\nEnter the state name to find population\n";
         cin>>st1;
          itr = mp.find(st1);    
          cout<<"\nPopulation of state\t"<<st1<<"\tis\t"<<itr->second;
  }
    
}


