// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
   cout << "Compare triplets\n";
   int alice[3] , bob[3];
   cout<<"enter alice rating\n";
   for(int i =0;i<3;i++)
   cin>>alice[i];
    cout<<"enter bob rating\n";
   for(int i =0;i<3;i++)
   cin>>bob[i];
   
   cout<<"entered rating for alice are : ";
   for(int i = 0 ; i< 3 ; i++)
   { 
       cout<<alice[i]<<" ";
   }
   cout<<endl;
cout<<"entered ratingfor bob are : ";
   for(int i = 0 ; i< 3 ; i++)
   { 
       cout<<bob[i]<<" ";
   }
   cout<<"\nscore for alcie and bob\n";
   int aliceScore = 0 , bobScore= 0 ;
   for(int i = 0 ; i < 3 ; i++)
   {
       if (alice[i]>bob[i])
       aliceScore++;
       if(alice[i]<bob[i])
       bobScore++;
   }
   cout<<aliceScore << " "<<bobScore;
    return 0;
}
