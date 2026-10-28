/***********************************************************************
// OOP244 Project, milestone 4 : tester program
//
// File	ms4.cpp
// Version 1.0
// Date 2026-10-15
// Author Fardad
// Description
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <iostream>
#include <fstream>
#include "Menu.h"
#include "PrintDesk.h"
using namespace std;
using namespace seneca;

void saveTicket(PrintDesk& ord) {
   ofstream tickettest("ticketTest.txt");
   ord.printTicket(tickettest);
}
void showSavedTicket(const char* filename) {
   ifstream tickettest(filename);
   char ch;
   while (tickettest.get(ch) && cout << ch);
}
int main() {
   cout << "Testing an invalid PrintDesk when a data file does not exist." << endl;
   PrintDesk badord("missing-print.csv", "missing-finish.csv");
   if (badord) {
      cout << "The print desk should have been invalid" << endl;
   }
   else {
      cout << "Passed!" << endl;
   }
   PrintDesk ord("prints.csv", "finishes.csv");
   cout << "Testing list finishes.................................." << endl;
   ord.listFinishes();
   cout << "Testing list prints................................." << endl;
   ord.listPrints();

   cout << "Testing finishing configuration.................................."
      "\nEnter:\n 1\n 1\n abc\n ---->" << endl;
   ord.addFinishing();
   if (ord.noOfTicketItems() == 1) {
      cout << "Passed!" << endl;
   }
   else {
      cout << "The number of ticket items should be 1!" << endl;
   }
   cout << "Testing print job configuration................................."
      "\nEnter:\n 1\n 1\n ---->" << endl;
   ord.addPrint();
   if (ord.noOfTicketItems() == 2) {
      cout << "Passed!" << endl;
   }
   else {
      cout << "The number of ticket items should be 2!" << endl;
   }
   cout << "Testing print ticket on screen........................." << endl;
   ord.printTicket(cout);
   cout << "Testing saving ticket in a file........................" << endl;
   saveTicket(ord);
   showSavedTicket("ticketTest.txt");
   cout << "testing hasUnsavedTicket()............................" << endl;
   if (ord.hasUnsavedTicket()) {
      cout << "Passed hasUnsavedTicket()!" << endl;
   }
   else {
      cout << "ord.hasUnsavedTicket() should have returned true!" << endl;
   }
   cout << "testing resetTicket()..................................." << endl;
   ord.resetTicket();
   if (ord.noOfTicketItems() == 0 && !ord.hasUnsavedTicket()) {
      showSavedTicket("ticket_1.txt");
   }
   else {
      cout << "Reset Ticket should save the ticket and reset the ticket" << endl;
   }

   return 0;
}
