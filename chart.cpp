//Author: McDermott Liam Shimada 

#include<iostream>

using namespace std;

//global variables
const int MAX = 100;

//prototypes

int find_largest(int values[], int size);


//start program

int main()
{ 
  //variables
  int values[MAX]; 
  int maxHeight;
  int maxWidth;
  int index = 0;
  int temp = -1; 


  //asks for user input 
  //cout<<"Please enter numbers. You can enter up to 100 numbers. Enter 0 to quit "<<endl;

  //takes the users entered numbers and stores them in array until user enters 0 or hits MAX (100)

  while(temp != 0 && index < MAX)
  {

    cin>>temp;
    values[index] = temp;
    index++; 


  }
  maxWidth = index - 1;
  maxHeight = find_largest(values, index);

  for(int x = maxHeight; x > 0; x--)
  {
    for(int y = 0; y < maxWidth; y++)
    {
      if(values[y] >= x)
      {
        cout<<'*';
      }
      else
      {
        cout<<" ";
      }
    }

    cout<<endl;
  }

  return 0;
}


//functions

//returns the largest number in the given array of numbers
int find_largest(int values[], int size)
{

  int largest = 0;

  for(int x = 0; x < size; x++)
  {
    if(values[x] > largest)
    {
      largest = values[x];
    }

  }
  
  return largest;


}
