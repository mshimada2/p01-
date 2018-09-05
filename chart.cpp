//chart.cpp
//Shimada, McDermott
//mshimada2

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

  //takes the users entered numbers and stores them in array until user enters 0 or hits MAX (100)
  while(temp != 0 && index < MAX)
  {
    cin>>temp;
    values[index] = temp;
    index++; 
  }
  
  //makes correct width (width - 1 so it gets rid of extra space)
  maxWidth = index - 1;
  //calls find_largest function by assigning it to maxHeight 
  maxHeight = find_largest(values, index);

  //iterates through to see how high the max height needs to print (x-- is key to making it print out the way you want)
  for(int x = maxHeight; x > 0; x--)
  {
    //prints out the width 
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
//imperative to have this for loop. it compares the next entered number with the last to find the greatest number and
//returns it
  for(int x = 0; x < size; x++)
  {
    if(values[x] > largest)
    {
      largest = values[x];
    }

  }

  return largest;


}
