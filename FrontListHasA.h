

#ifndef _FRONT_LIST_HAS_A
#define _FRONT_LIST_HAS_A

#include "FrontListInterface.h"
#include "ListInterface.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"

template<class ItemType>
class FrontListHasA : public FrontListInterface<ItemType>
{
private:
   ListInterface<ItemType>* listPtr; 
	
public:
   FrontListHasA();
   FrontListHasA(const FrontListHasA<ItemType>& fList);
   virtual ~FrontListHasA();
   
   void insertFront(const ItemType& newEntry);
   bool removeFront(int position);
   
   // The following methods have the same specifications
   // as given in ListInterface:

   bool isEmpty() const;
   int getLength() const;
   bool remove(int position);
   void clear();
   ItemType getEntry(int position) const throw(PrecondViolatedExcep);
}; // end SortedListHasA

#include "FrontListHasA.cpp"
#endif 
