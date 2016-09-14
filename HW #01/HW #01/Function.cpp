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
    
    bool hasPassedTest =true;
    
    srand(time(NULL));
    int x = rand()%100;
    int y = rand()%100;
    cout << "x is " << x << " and y is " << y << endl;
    
    
    if ( x>y)
    {
        cout << "x is greater than y"<<endl;
    }
    if (x==y)
        
    {
        cout << "x is equal to y"<<endl;
    }
    /*
    else
    {
        cout << "y is greater than x"<<endl;
    }
    */
    int numberOfShares=0;
    cout<< "Enter a value for a number of shares: ";
    cin>> numberOfShares;
    
    if (numberOfShares < 100)
    {
        cout << numberOfShares << " is less than 100"<<endl;
    }
    else
    {
        cout << numberOfShares << " is greater than 100"<<endl;
    }
    
   
    
    int boxwidth=0;
    int bookwidth=0;
    cout << "Enter a box width: ";
    cin >> boxwidth;
    cout << "Enter a book width: " ;
    cin >> bookwidth;
    
    if ((boxwidth)/(bookwidth))
    {
        cout << "The box width is evenly dibisable by the book width" <<endl;
    }
    else
    {
        cout << "The box width is not dibisable by the book width" <<endl;

    }
    
   
    
    int shelfLifeOfChocolate=0;
    int outsidetempurate=0;
    
    cout << "Enter the shelf life for a box of chocolate: ";
    cin >> shelfLifeOfChocolate;
    cout << "Enter the outside temperature: ";
    cin >> outsidetempurate;
    
    if (outsidetempurate > 90)
    {
        
        shelfLifeOfChocolate = shelfLifeOfChocolate-4;
        if ( shelfLifeOfChocolate <0)
        {
            //Negative would be invalid
            shelfLifeOfChocolate=0;
        }
    }
    cout << "The shelf life is " << shelfLifeOfChocolate;
    
    cout << "" <<endl;
    
}

void ex03()
{
    int areaOfASquare=0;
    cout << "Enter the area of a square ";
    cin >> areaOfASquare;
    double DiagonalOfSquare=0;
    DiagonalOfSquare = sqrt(2 * areaOfASquare);
    cout << "The diagonal of the square is " << DiagonalOfSquare <<endl;
    
    char y = 'y';
    char n = 'n';
    char csResponse = 'y';
    cout << "Have you taken computer Science before 'y' or 'n'? ";
    cin >> csResponse;
    if (csResponse == y)
    {
        cout << "Yes, Computer Science is great"<<endl;
    }
    else
    {
        cout << "No? you should take it!"<<endl;
    }
    // ex 2 letter C
    char tab='\t';
    
    // ex 2 letter D
    string mailingAddress;
    cout << "Enter Mailing Address: ";
    cin.ignore();
    getline(cin, mailingAddress);
    cout << "Your Mailing Address is " << mailingAddress << endl;
    
    // ex 2 letter E
    string stur ="";
}

void ex04()
{
    int answer=0;
    cout << "Enter a number between 1 and 10 ";
    cin >> answer;
    
    if(answer >=1 && answer <= 10)
    {
        cout << " Your number is " << answer;
    }
    else
    {
        while(answer <
              1 || answer >10)
        {
            cout << "Your number is invalid, please try again: ";
            cin >> answer;
            cout << "Your number is " << answer << endl;
            
        }
    }
    
     // ex 3 letter b
     cout<< endl;
     
     int answerCubed =0;
    
    
    for (int i=1;i<=answer;i++)
    {
        answerCubed = answerCubed + (i*i*i);
    }
     cout << "Your answer cubed is " << answerCubed <<endl;

    
    int count =0;

     do
     {
         cout << setw(3) << "*";
         count+=1;
     }while(count<answer);
   
    cout << endl;
    
   
    for (int i=0; i<=40;i++)
    {
        if (i%2==0)
        {
            cout << i << " ";
        }
    }
    int result =timesTwo(answer);
    cout << "Result of timesTwo:" << result <<endl;

    srand(time(NULL));
    int x = rand()%100;
    int y = rand()%100;
    
    int result2 =add(x,y);
    cout << "Result of v1 + v2:" << result2 <<endl;
    
    int result3 = 50;
    add1(result3);
    cout << "Result of add1:" << result3 <<endl;

}


 int timesTwo(int value)
{
    return value*2;
}

int add(int v1, int v2)
{
    return v1 + v2;
}

void add1(int& p)
{
    p = p+1;
}

void ex05()
{
    const int numbers = 5;
    int integer [numbers];
    int size=0;
    cout << "Enter 5 numbers: ";
    
    for (int i=0; i<numbers;i++)
    {
        cin >>integer[i];
        
    }
    int sum=0;
    int product=1;
    
    for (int i=0; i<numbers;i++)
    {
        sum += integer[i];
        product *= integer[i];
    
    }
    cout << "The sum is " <<sum <<endl;
    cout << "The product is " <<product <<endl;
        cout << "" <<endl;
    outputArray(integer,numbers);
    outputArray2(integer, numbers);
    
    
    
    
}

void outputArray(int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
}

void outputArray2(int array[], int size)
{
    int value=0;
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
    if(hasvalue)
    {
        cout << "Yes, the array has the value " << value<<endl;
    }
    else
    {
        cout << "No, it doesnt have that value "<< value <<endl;
    }
    
}
