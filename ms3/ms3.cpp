// OOP244 Fall 2026 - Seneca Print Desk
// Adapted from code by Fardad Soleimanloo
// Date: 2026-10-15
/***********************************************************************
// OOP244 Project, milestone 3 : tester program
//
// File  ms3.cpp
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
#include "PrintJob.h"
#include "Finishing.h"
#include "Chargeable.h"
using namespace seneca;
using namespace std;

void PrintJobTester();
void FinishingTester();
void dumpFile(const char* fn);
int main() {
   cout << "Testing PrintJob Class=============================" << endl;
   PrintJobTester();
   cout << "Testing Finishing Class=============================" << endl;
   FinishingTester();
   dumpFile("printout.csv");
   dumpFile("finishout.csv");
   return 0;
}

void print(PrintJob D) {
   D.print() << endl;
}
void print(Finishing F) {
   F.print() << endl;
}
void virtuals(Chargeable& B, ifstream& file, ofstream& outfile) {
   cout << endl << "Checking Virtuals: " << endl;
   while (file) {
      B.read(file);
   }
   B.print() << endl;
   B.print(outfile) << endl;
   cout << "Price: " << B.price() << endl;
   cout << (B.configured() ? "Configured" : "Not Configured") << endl;
   cout << "Enter the following:\n2<ENTER>\n<ENTER>(only for finishing)\n=========>" << endl;
   B.configure();
   cout << (B.configured() ? "Configured" : "Not Configured") << endl;
}

void dumpFile(const char* fn) {
   ifstream f(fn);
   char ch;
   cout << fn << ": ==============>" << endl;
   while (f) {
      if (f.get(ch)) cout << ch;
   }
   cout << "<==============" << endl;
}

void PrintJobTester() {
   cout << "PrintJob Tester!" << endl;
   PrintJob D1, D2;
   ifstream file("prints.csv");
   ofstream fileout("printout.csv");
   if (file) {
      double total = 0;
      D1.read(file);
      D2.read(file);
      cout << D1 << endl << D2 << endl;
      print(D1);
      print(D2);
      if (D1.configured()) {
         cout << "PrintJobs by default are not configured!" << endl;
      }
      else {
         cout << "Enter the following:\n1<ENTER>\n2<ENTER>\n3<ENTER>\n4<ENTER>\n0<ENTER>\n=========>" << endl;
         while (D2.configure()) {
            print(D2);
            total += D2;
         }
         cout.setf(ios::fixed, ios::floatfield);
         cout.precision(2);
         cout << "Total = " << total << endl;
      }
      if (D2.configured()) {
         cout << "When back is selected, PrintJob must be set to not-configured!" << endl;
      }
      cout << "Enter the following:\n2<ENTER>\n=========>" << endl;
      D2.configure();
      D1 = D2;
      if (D1.configured() && D2.configured()) {
         print(D1);
         total = total + D1;
         cout.setf(ios::fixed, ios::floatfield);
         cout.precision(2);
         cout << "Total = " << total << endl;
      }
      else {
         cout << D1 << " and " << D2 << " should be in configured status!" << endl;
      }
      virtuals(D1, file, fileout);
   }
   else {
      cout << "prints.csv is missing!" << endl;
   }
}
void FinishingTester() {
   cout << "Finishing Tester!" << endl;
   Finishing F1, F2;
   ifstream file("finishes.csv");
   ofstream fileout("finishout.csv");
   if (file) {
      double total = 0;
      F1.read(file);
      F2.read(file);
      cout << F1 << endl << F2 << endl;
      print(F1);
      print(F2);
      if (F1.configured()) {
         cout << "Finishing by default is not configured!" << endl;
      }
      else {
         cout << "Enter the following:\n1<ENTER>\nbind on left\n2<ENTER>\n<ENTER>\n0<ENTER>\n=========>" << endl;
         while (F2.configure()) {
            print(F2);
            total += F2;
         }
         cout.setf(ios::fixed, ios::floatfield);
         cout.precision(2);
         cout << "Total = " << total << endl;
      }
      if (F2.configured()) {
         cout << "When back is selected, Finishing must be set to not-configured!" << endl;
      }
      cout << "Enter the following:\n2<ENTER>\n<ENTER>\n=========>" << endl;
      F2.configure();
      F1 = F2;
      if (F1.configured() && F2.configured()) {
         print(F1);
         total = total + F1;
         cout.setf(ios::fixed, ios::floatfield);
         cout.precision(2);
         cout << "Total = " << total << endl;
      }
      else {
         cout << F1 << " and " << F2 << " should be in configured status!" << endl;
      }
      virtuals(F1, file, fileout);
   }
   else {
      cout << "finishes.csv is missing!" << endl;
   }
}
