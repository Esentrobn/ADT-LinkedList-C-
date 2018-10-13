

#include "FrontListIsA.h"  // Header file
#include <cassert>
#include <cmath>
 
template<class ItemType>
FrontListIsA<ItemType>::FrontListIsA()
{
}  // end default constructor

template<class ItemType>
FrontListIsA<ItemType>::FrontListIsA(const FrontListIsA<ItemType>& fList)
	:LinkedList<ItemType>(fList)
{
}  // end copy constructor

template<class ItemType>
FrontListIsA<ItemType>::~FrontListIsA()
{
	LinkedList<ItemType>::clear();
}  // end destructor

template<class ItemType>
void FrontListIsA<ItemType>::insertFront(const ItemType& newEntry)
{

   LinkedList<ItemType>::insert(1, newEntry);

}  // end insertSorted

template<class ItemType>
bool FrontListIsA<ItemType>::removeFront()
{
   bool ableToRemove = false;
   if (!LinkedList<ItemType>::isEmpty())
   {
	LinkedList<ItemType>::remove(1);
      	ableToRemove = true;
   }  // end if

   return ableToRemove;
}  // end removeSorted



template<class ItemType>
bool FrontListIsA<ItemType>::insert(int newPosition, const ItemType& newEntry) 
{ 
	return false;
} // end insert

template<class ItemType>
void FrontListIsA<ItemType>::setEntry(int position, const ItemType& newEntry) throw(PrecondViolatedExcep)
{ 
	throw PrecondViolatedExcep("This is an illegal action!"); 
} // end setEntry

//  End of implementation file.
