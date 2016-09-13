//
//  Function.cpp
//  Sept 8 2016
//
//  Created by Megan Bruening on 9/8/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include "Function.hpp"

using namespace std;


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
    else
    {
        cout << "y is greater than x"<<endl;
    }
    
    int numberOfShares=0;
    cout<< "Enter a value for a number of shares"<<endl;
    cin>> numberOfShares;
    
    if (numberOfShares < 100)
    {
        cout << "Number of shares is less than 100"<<endl;
    }
    else
    {
        cout << "Number of shares is greater than 100"<<endl;
    }
    
    int boxwidth=0;
    int bookwidth=0;
    cout << "Enter a box width" <<endl;
    cin >> boxwidth;
    cout << "Enter a book width" <<endl;
    cin >> bookwidth;
    
    if (boxwidth/bookwidth)
    {
        cout << "The box width is evenly dibisable by the book width" <<endl;
    }
    
    int shelfLifeOfChocolate=0;
    int outsidetempurate=0;
    
    cout << "Enter the shelf life for a box of chocolate";
    cin >> shelfLifeOfChocolate;
    cout << "Enter the outside temperature";
    cin >> outsidetempurate;
    
    if (outsidetempurate > 90)
    {
        int newShelfLife=0;
        shelfLifeOfChocolate-4 == newShelfLife;
        cout << newShelfLife;
    }
    
}

void ex03()
{
    int areaOfASquare=0;
    cout << "Enter the area of a square ";
    cin >> areaOfASquare;
    double DiagonalOfSquare=0;
    DiagonalOfSquare = sqrt(2 * areaOfASquare);
    cout << DiagonalOfSquare <<endl;
    
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
    
    string mailingAddress;
    cout << "Enter Mailing Address: ";
    cin  >> mailingAddress;
    cout << "Your Mailing Address is " << mailingAddress << endl;
    
    // ex 2 letter e
    
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
    /*
     // ex 3 letter b
    cout<< endl;

    int answerCubed =0;
    answer * answer * answer == answerCubed;
    
    cout << "Your awnser cubed is " << 'answerCubed';
    
    // ex 3 letter c
    do{
        
    }while();
    // ex 3 letter d
    // ex 3 letter e
    // ex 3 letter f
    // ex 3 letter g
    */

}

void ex05()
{
    
}
