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
    //takes the number and places it within the array and then increments the array for the next number
    cin>>temp;
    values[index] = temp;
    index++; 
  }
  
  //makes correct width (width - 1 so it gets rid of extra space)
  maxWidth = index - 1;
  //calls find_largest function by assigning it to maxHeight 
  maxHeight = find_largest(values, index);

  //iterates through to see how high the max height needs to print (x-- is key to making it print the height like its going  bottom to top
  for(int x = maxHeight; x > 0; x--)
  {
    //prints out the width 
    for(int y = 0; y < maxWidth; y++)
    {
      //prints astericks if values[y] of width is greater than or equal to x or height; anything ELSE then print space
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

  //declare largest variable after the FOR loop it can hold the largest number 
  int largest = 0;
//imperative to have this FOR loop. it compares the next entered number with the last entered number to find the greatest 
//number and returns it so the program knows how high to print for the height, 
  for(int x = 0; x < size; x++)
  {
    if(values[x] > largest)
    {
      largest = values[x];
    }

  }

  return largest;


}
