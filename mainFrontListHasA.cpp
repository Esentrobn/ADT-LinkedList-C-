
#include <iostream>
#include <string>
#include "FrontListHasA.h" // ADT sorted list operations

using namespace std;

void displayList(FrontListInterface<string>* listPtr)
{
	cout << "The front list contains " << endl;
   for (int pos = 1; pos <= listPtr->getLength(); pos++)
   {
      cout << listPtr->getEntry(pos) << " ";
   } // end for
	cout << endl << endl;
}  // end displayList

void copyConstructorTester()
{
	FrontListHasA<string> list;
   string items[] = {"zero", "one", "two", "three", "four", "five"};
	for (int i = 0; i < 6; i++)
   {
		cout << "Adding " << items[i] << endl;
      list.insertFront(items[i]);
	}
   displayList(&list);
   
   FrontListHasA<string> copyOfList(list);
   cout << "Copy of list: ";
   displayList(&copyOfList);
   
   cout << "The copied list: ";
   displayList(&list);
}  // end copyConstructorTester

void FrontListTester(FrontListInterface<string>* listPtr)
{
   string luke = "Luke";
   string brent = "Brent";
   string donna = "Donna";
   string tom = "Tom";
   string sue = "Sue";
   string jerry = "Jerry";
   
   cout << "\nTest isEmpty with an empty list:" << endl;
   if (listPtr->isEmpty())
      cout << "OK" << endl;
   else
      cout << "isEmpty() error" << endl;

   cout<< "\nAdding names to the list:" << endl;	
   listPtr->insertFront(luke);
   listPtr->insertFront(brent);
   listPtr->insertFront(donna);
   listPtr->insertFront(tom);
   listPtr->insertFront(sue);
   listPtr->insertFront(jerry);
   
   // display the list
   cout << "List should contain\nJerry, Sue, " <<
   "Tom, Donna, Brent, Luke" << endl;
   cout << "\nList actually contains:" << endl;
   displayList(listPtr);
   cout << endl;
   
   
   // Front of the list name
   cout << "The name at the front of the list is " << listPtr->getEntry(1) << endl;
   
   
   // test getLength and getEntry
   cout << "\nTest getLength and getEntry:\n" << endl;
   
   cout << "\nList has " << listPtr->getLength() << " entries, as follows:\n" << endl;
   for (int i = 1; i <= listPtr->getLength(); i++)
      cout << i << ": " << listPtr->getEntry(i) << endl;
   
   
   // test remove
   cout << "\nTest remove:\n" << endl;
   
   // remove first entry
   cout << "\nRemoving first item (Jerry): " << listPtr->removeFront(1) << "; should be 1 (true)" << endl;
   cout << "\nAfter removing Jerry, list contains " << listPtr->getLength()
   << " items, as follows:" << endl;
   displayList(listPtr);
   
   //Remove another item
   cout << "\n Removing another item (Sue): " << listPtr->removeFront(1) << "; should be 1 (true)" << endl;
   cout << "\nAfter removing Sue, list contains " << listPtr->getLength() << " items, as follows:" << endl;
   displayList(listPtr);
   
   // test clear()
   cout << "\nTest clear():\n" << endl;
   listPtr->clear();
   
   if (listPtr->isEmpty())
      cout << "\nThe list is empty after invoking clear()." << endl;
   else
      cout << "\nclear() error" << endl;
} // end sortedListTester

void listOpsTester(FrontListInterface<string>* listPtr)
{
   string luke = "Luke";
   string brent = "Brent";
   string donna = "Donna";
   string tom = "Tom";
   string sue = "Sue";
   string jerry = "Jerry";
   
   listPtr->insertFront(luke);
   listPtr->insertFront(brent);
   listPtr->insertFront(donna);
   listPtr->insertFront(tom);
   listPtr->insertFront(sue);
   listPtr->insertFront(jerry);
   
   displayList(listPtr);
   
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 0 (false)" << endl;
   cout << "getLength returns : " << listPtr->getLength() << "; should be 6" << endl;
   
   cout << "remove(2): returns " << listPtr->remove(1) << "; should be 1 (true)" << endl;
   cout << "remove(1): returns " << listPtr->remove(1) << "; should be 1 (true)" << endl;
   cout << "remove(6): returns " << listPtr->remove(6) << "; should be 0 (false)" << endl;
   displayList(listPtr);
   cout << "getLength returns : " << listPtr->getLength() << "; should be 4" << endl;
   cout << "clear: " << endl;
   listPtr->clear();
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << endl;
   
   try
   {
      cout << "Attempt an illegal retrieval from position 6: " << endl;
      listPtr->getEntry(6);
   }
   catch(PrecondViolatedExcep e)
   {
      cout << e.what() << endl;
   }  // end try/catch
} // end listOpsTester

int main()
{
   copyConstructorTester();

	FrontListInterface<string>* listPtr = new FrontListHasA<string>();
	cout << "Testing the Link-Based Front List:" << endl;
	FrontListTester(listPtr);
   cout << "======================================" << endl;
   
	cout << "\nTesting the List Operations:" << endl;
	listOpsTester(listPtr);

   return 0;
}  // end main


