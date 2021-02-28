/*
 * clockdemo.cpp
 *
 *  Created on: Jan 18, 2021
 *      Author: abigailsantoro
 */

#include "Clock.h" // includes everything from the header file

void menu() // output options to user
{
   cout<<"*************************************"<<endl;
   cout<<"* 1 - Add One Hour *"<<endl;
   cout<<"* 2 - Add One Minute *"<<endl;
   cout<<"* 3 - Add One Second *"<<endl;
   cout<<"* 4 - Exit *"<<endl;
   cout<<"*************************************"<<endl;
}

int main() // get and output time in the main
{
   Clock clock12(false), clock24(true);
   int choice;
   bool exit=false;
   while(!exit)
   {
       cout<<"**************** ****************"<<endl;
       cout<<"* "<<setw(12);
       clock12.displayTime(cout);
       cout<<" * ";
       cout<<"* "<<setw(12);
       clock24.displayTime(cout);
       cout<<" *"<<endl;
       cout<<"**************** ****************"<<endl;
       cout<<endl;
       menu();
       cin>>choice; // get input from user about which case to apply
       switch(choice)
       {
       case 1: // adds hours
           clock12.addHours(1);
           clock24.addHours(1);
           break;
       case 2: //adds minutes
           clock12.addMinutes(1);
           clock24.addMinutes(1);
           break;
       case 3: // adds seconds
           clock12.addSeconds(1);
           clock24.addSeconds(1);
           break;
       case 4: // exits program
           exit = true;
       default:
           break;

       }
       system("CLS");
   }

}


