

#ifndef _FRONT_LIST_AS_A
#define _FRONT_LIST_AS_A

#include "FrontListInterface.h"
#include "LinkedList.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"

template<class ItemType>
class FrontListAsA : public FrontListInterface<ItemType>, private LinkedList<ItemType>
{
public:
   FrontListAsA();
   FrontListAsA(const FrontListAsA<ItemType>& fList);
   virtual ~FrontListAsA();

   void insertFront(const ItemType& newEntry);
   bool removeFront(int position);
   // The following methods are inherited and have the same 
   // specifications as given in ListInterface:
   bool isEmpty() const;
   int getLength() const;
   bool remove(int position);
   void clear();
   ItemType getEntry(int position) const throw(PrecondViolatedExcep);   
}; // end SortedListAsA

#include "FrontListAsA.cpp"
#endif 
