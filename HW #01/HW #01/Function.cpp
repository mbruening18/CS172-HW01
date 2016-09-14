//
//  Function.cpp
//  HW #01
//
//  Created by Megan Bruening on 9/13/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include "Function.hpp"

using namespace std;
int timesTwo(int value);
int add(int v1, int v2);
void add1(int& p);
void outputArray(int array[], int size);
void outputArray2(int array[], int size);


void ex02()
{
    //Declare a variable hasPassedTest , and initialize it to true .
    bool hasPassedTest =true;
    
    //Declares two variables x and y which are initialized to random numbers
    srand(time(NULL));
    int x = rand()%100;
    int y = rand()%100;
    cout << "x is " << x << " and y is " << y << endl;
    
    //outputs whether x is greater than or equal to y
    if ( x>y)
    {
        cout << "x is greater than y"<<endl;
    }
    if (x==y)
        
    {
        cout << "x is equal to y"<<endl;
    }
    cout << "" <<endl;
    //Declares a variable numberOfShares and prompts the user for a value
    int numberOfShares=0;
    cout<< "Enter a value for a number of shares: ";
    cin>> numberOfShares;
    
    //outputs whether the value is less/greater than 100
    if (numberOfShares < 100)
    {
        cout << numberOfShares << " is less than 100"<<endl;
    }
    else
    {
        cout << numberOfShares << " is greater than 100"<<endl;
    }
    cout << "" <<endl;
    
    //Prompts the user for a box width and a book width
    int boxwidth=0;
    int bookwidth=0;
    cout << "Enter a box width: ";
    cin >> boxwidth;
    
    cout << "Enter a book width: " ;
    cin >> bookwidth;
    
    //outputs if the box width is evenly divisible or not by the book width
    if ((boxwidth)/(bookwidth))
    {
        cout << "The box width is evenly dibisable by the book width." <<endl;
    }
    else
    {
        cout << "The box width is not dibisable by the book width" <<endl;
    }
    cout << "" <<endl;
    
    //Prompts the user for the shelf life of a box of chocolate and the outside temperature
    int shelfLifeOfChocolate=0;
    int outsidetempurate=0;
    
    cout << "Enter the shelf life for a box of chocolate: ";
    cin >> shelfLifeOfChocolate;
    cout << "Enter the outside temperature: ";
    cin >> outsidetempurate;
    
    // decreases the shelf life by 4 if the outside temperature is greater than 90
    if (outsidetempurate > 90)
    {
        
        shelfLifeOfChocolate = shelfLifeOfChocolate-4;
        if ( shelfLifeOfChocolate <0)
        {
            //Negative would be invalid
            shelfLifeOfChocolate=0;
        }
    }
    cout << "The shelf life is " << shelfLifeOfChocolate<<endl;
    
    cout << "" <<endl;
    
}

void ex03()
{
    //Prompt the user for the area of a square
    int areaOfASquare=0;
    cout << "Enter the area of a square ";
    cin >> areaOfASquare;
    //Output the length of the diagonal for that square
    double DiagonalOfSquare=0;
    DiagonalOfSquare = sqrt(2 * areaOfASquare);
    cout << "The diagonal of the square is " << DiagonalOfSquare <<endl;
    
    cout << "" <<endl;
    
    //Prompt the user for a yes or no response (y or n) using a char variable
    char y = 'y';
    char n = 'n';
    char csResponse = 'y';
    cout << "Have you taken computer Science before 'y' or 'n'? ";
    cin >> csResponse;
    //Output “yes” if the user gave you a ‘y’, and “no” if the user gave you ‘n’.
    if (csResponse == y)
    {
        cout << "Yes, Computer Science is great"<<endl;
    }
    else
    {
        cout << "No? you should take it!"<<endl;
    }
    
    cout << "" <<endl;
    
    //Initialize a char variable tab to the tab character.
    char tab='\t';
    
    //Declare a string variable mailingAddress
    string mailingAddress;
    //prompt the user for their mailing address.
    cout << "Enter Mailing Address: ";
    cin.ignore();
    getline(cin, mailingAddress);
    cout << "Your Mailing Address is " << mailingAddress << endl;
    
    cout << "" <<endl;
    
    //Initialize a string variable to the empty string.
    string stur ="";
}

void ex04()
{
    //Part A: Prompt the user for a number between 1 and 10
    int answer=0;
    cout << "Enter a number between 1 and 10: ";
    cin >> answer;
    
    cout << "" <<endl;
    
    //Loop until the user gives a valid input.
    if(answer >=1 && answer <= 10)
    {
        cout << "Your number is: " << answer;
    }
    else
    {
        while(answer <1 || answer >10)
        {
            cout << "Your number is invalid, please try again: ";
            cin >> answer;
            cout << "Your number is " << answer << endl;
        }
    }
    cout << "" <<endl;
    cout << "" <<endl;
    
    //Use the number in part (a) to output the sum of the cubes from 1 to the number given (by cube, I mean that for a given number x, determine x3).
    int answerCubed =0;
    
    for (int i=1;i<=answer;i++)
    {
        answerCubed = answerCubed + (i*i*i);
    }
     cout << "Your answer cubed is " << answerCubed <<endl;
    
    cout << "" <<endl;

    //Use a do-while loop to output a number of asterisks, again using the input from (a)
    int count =0;
     do
     {
         cout << "*";
         count+=1;
     }while(count<answer);
   
    cout << "" <<endl;
    cout << "" <<endl;
    
   // Use a for loop to output the even numbers from 0 to 40
    for (int i=0; i<=40;i++)
    {
        if (i%2==0)
        {
            cout << i << " ";
        }
        
    }
    cout << "" <<endl;
    cout << "" <<endl;
    
    
    //Call that function from your ex04 function
    //using the value prompted in (a)
    int result =timesTwo(answer);
    cout << "Result of timesTwo: " << result <<endl;
    cout << "" <<endl;
    
    //Call using two random numbers.
    srand(time(NULL));
    int x = rand()%100;
    int y = rand()%100;
    
    //returns the sum of those integers.
    int result2 =add(x,y);
    cout << "Result of v1 + v2: " << result2 <<endl;
    cout << "" <<endl;
    
    //function should take the integer as pass by reference.
    int result3 = 50;
    add1(result3);
    cout << "Result of add1: " << result3 <<endl;
    cout << "" <<endl;

}

//use function timesTWo that takes an integer, and doubles that integer.
 int timesTwo(int value)
{
    return value*2;
}

//Write a function called add that takes two random integers
int add(int v1, int v2)
{
    return v1 + v2;
}

// function that adds one to its parameter.
void add1(int& p)
{
    p = p+1;
}

void ex05()
{
    //stores those integer values in an array for loop
    const int numbers = 5;
    int integer [numbers];
    int size=0;
    cout << "Enter 5 numbers: ";
    
    //Write a loop that asks the user for five integers
    for (int i=0; i<numbers;i++)
    {
        cin >>integer[i];
    }
    int sum=0;
    int product=1;
    
    cout << "" <<endl;
    
    
    //calculates the sum and the product of the values in the integers
    for (int i=0; i<numbers;i++)
    {
        sum += integer[i];
        product *= integer[i];
    }
    
    //outputs those results
    cout << "The sum is " <<sum <<endl;
    
    cout << "" <<endl;
    
    cout << "The product is " <<product <<endl;
    
    cout << "" <<endl;
    
    
    // outputs the values in that array from outputArray
    //passing the array of 5 integers
    outputArray(integer,numbers);
    
    cout << "" <<endl;
    
    //outputs the values in that array from outputArray2
    // outputs whether or not the array contains that value.
    outputArray2(integer, numbers);
    
    cout << "" <<endl;
    
    
    
    
}

//Write a function that takes an array and the size of the array
void outputArray(int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "" <<endl;

}
//function that takes an array and the size of that array
void outputArray2(int array[], int size)
{
    int value=0;
    //prompts the user for a value
    cout << "Enter a value: "<<endl;
    cin >> value;
    bool hasvalue=false;
    
    for (int i=0; i<size; i++)
    {
        if (value==array[i])
        {
            hasvalue=true;
        }
    }
    //outputs whether or not the array contains that value
    if(hasvalue)
    {
        cout << "Yes, the array has the value " << value<<endl;
    }
    else
    {
        cout << "No, it doesnt have that value "<< value <<endl;
    }
    
}
