#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{ 
  for( string string; getline( cin, string ); )
  {
      int array[ 10 ];int b;
      istringstream stream( string );
      bool fail = false;
      for( int i = 0; i < 10; ++i )
      {
          if( !( stream >> array[ i ] ) ) 
          {
              fail = true;
              b=1;
              break;
          }
      }
    int ch;int a;int c;
    if(!fail)
    {
        for( int k=0;k<9;k++){ 
            if(array[k]<=array[k+1]) c=1;
        }
        if(c==1) {
            cin>>ch;
            for(int i=0;i<9;i++)
            {   
                for (int j=i+1;j<10;j++)
                {
                    if (array[i]+array[j]==ch) 
                {
                    cout<<array[i]<<" "<<array[j];
                    a=1;exit(0);
                }
                }
            }
             if (a!=1){ cout<<"There is no such pair of numbers."; break;}
        }
         else{ cout<<"The input sequence must be non-decreasing.";break;}
        }
    else{ cout<<"An error has occurred while reading the input sequence";break;}
        
}
}
