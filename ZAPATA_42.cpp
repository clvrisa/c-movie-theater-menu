//Assignment 4.2 Theater Statistics
// Write a program for a theater that will keep track of how many people in each of 5 age categories attended a particular movie.

#include <iostream>

using namespace std;

int main()
{
  //declare variables
  int age, range_1 = 0, range_2 = 0, range_3 = 0, range_4 = 0, range_5 = 0, sum = 0, average = 0, counter = 0, youngest = 200, oldest = 0, incoming = 0, snack = 0, drink = 0, popcorn = 0, nachos = 0, drink_pop = 0, drink_nacho = 0, organic = 0;
  char retry;

  // display menu for user
  cout << "  ==========================" << endl;
  cout << "  THEATER STATS PROGRAM" << endl;
  cout << "  ==========================" << endl << endl;
  cout << "Movie theater snacks available for purchase" << endl;
  cout << "==========================================" << endl;
  cout << "1 - Soft Drink (such as Coca Cola, ICCEE, Mineral Water etc...)" << endl;
  cout << "2 - Popcorn" << endl;
  cout << "3 - Nachos" << endl;
  cout << "4 - Soft drink & Popcorn" << endl;
  cout << "5 - Soft drink & Nachos" << endl;
  cout << "6 - Organic and Gluten-free snacks" << endl;
  cout << "7 - None" << endl;
  cout << "==========================================" << endl;

// prompt for user input of attendee age
cout << "Enter age of attendee (-1 to quit): ";
cin >> age; //priming read
cout << "Movie theater snack purchased. (Select items 1-7): ";
cin >> snack;
cout << "--------------------------" << endl;

youngest = oldest = age;

// use while loop to determine age range and sales
while (age != -1)
  {
    if (age > 0 && age <= 18)
      range_1++;
    if (age >= 19 && age <= 30)
        range_2++;
    if (age >=31 && age <= 40)
        range_3++;
    if (age >= 41 && age <= 60)
      range_4++;
    if (age >= 60)
      range_5++;
    if (snack == 1)
      drink++;
    if (snack == 2)
      popcorn++;
    if (snack == 3)
      nachos++;
    if (snack == 4)
      drink_pop++;
    if (snack == 5)
      drink_nacho++;
    if (snack == 6)
      organic++;
    else if (snack <= 0 || snack >= 8)
      {
        cout << "Invalid selection, please choose from 1 - 7" << endl;
        cout << "Movie theater snack purchased. (Select items 1 - 7): ";
        cin >> snack;
      }

    // determine youngest and oldest age
    if (age < youngest)
        youngest = age;
    if (age > oldest)
      oldest = age;

    sum = sum+= age;
    counter++;

    cout << "Enter age of attendee (-1 to quit): ";
    cin >> age; // get next age input
    cout << "Movie theater snack purchased. (Select items 1-7): ";
    cin >> snack;
    cout << "--------------------------" << endl;
  }

  // display results of age range
  cout << "age 0  to 18: " << range_1 << endl;
  cout << "age 19 to 30: " << range_2 << endl;
  cout << "age 31 to 40: " << range_3 << endl;
  cout << "age 41 to 60: " << range_4 << endl;
  cout << "over 60: " << range_5 << endl << endl;

  // formula to determine average age range
  average = sum / counter;

  // display the average
  cout << "The average age was " << average << endl;
  cout << "The youngest person in attendance was " << youngest << endl;
  cout << "The oldest person in attendance was " << oldest << endl << endl;
  // display sales
  cout << "Theater Concession Stand sales" << endl;
  cout << "==================================" << endl;
  cout << "Soft Drink (such as Coca Cola, ICCEE, Mineral Water etc.): " << drink << endl;
  cout << "Popcorn: " << popcorn << endl;
  cout << "Nachos: " << nachos << endl;
  cout << "Soft drink & Popcorn: " << drink_pop << endl;
  cout << "Soft drink & Nachos: " << drink_nacho << endl;
  cout << "Organic and Gluten-free snacks: " << organic << endl;

  youngest = 1000;
  oldest = 0;

return 0;
}

/*

  ==========================
  THEATER STATS PROGRAM
  ==========================

Movie theater snacks available for purchase
==========================================
1 - Soft Drink (such as Coca Cola, ICCEE, Mineral Water etc...)
2 - Popcorn
3 - Nachos
4 - Soft drink & Popcorn
5 - Soft drink & Nachos
6 - Organic and Gluten-free snacks
7 - None
==========================================
Enter age of attendee (-1 to quit): 34
Movie theater snack purchased. (Select items 1-7): 4
--------------------------
Enter age of attendee (-1 to quit): 16
Movie theater snack purchased. (Select items 1-7): 5
--------------------------
Enter age of attendee (-1 to quit): 68
Movie theater snack purchased. (Select items 1-7): 12
--------------------------
Invalid selection, please choose from 1 - 7
Movie theater snack purchased. (Select items 1 - 7): 6
Enter age of attendee (-1 to quit): 53
Movie theater snack purchased. (Select items 1-7): 6
--------------------------
Enter age of attendee (-1 to quit): 39
Movie theater snack purchased. (Select items 1-7): 1
--------------------------
Enter age of attendee (-1 to quit): 23
Movie theater snack purchased. (Select items 1-7): 2
--------------------------
Enter age of attendee (-1 to quit): 21
Movie theater snack purchased. (Select items 1-7): 3
--------------------------
Enter age of attendee (-1 to quit): 21
Movie theater snack purchased. (Select items 1-7): 4
--------------------------
Enter age of attendee (-1 to quit): -1
Movie theater snack purchased. (Select items 1-7): 0
--------------------------
age 0  to 18: 1
age 19 to 30: 3
age 31 to 40: 2
age 41 to 60: 1
over 60: 1

The average age was 34
The youngest person in attendance was 16
The oldest person in attendance was 68

Theater Concession Stand sales
==================================
Soft Drink (such as Coca Cola, ICCEE, Mineral Water etc.): 1
Popcorn: 1
Nachos: 1
Soft drink & Popcorn: 2
Soft drink & Nachos: 1
Organic and Gluten-free snacks: 1

Process returned 0 (0x0)   execution time : 49.428 s
Press any key to continue.

*/
