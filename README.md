# ADT-LinkedList-Inheritance C ++-
The program uses a template class that can adapt to the users need. Linked-List definitions are often particularly useful -
when the program is manipulating long and different kind of data types under one list. 
This data structure inserts an entry into this sorted list in its proper order so that the list remains sorted.
It also makes a friend function class call that helps organize the arrival of a new property. 


                   TEST

Script started on April  8, 2016 08:00:14 AM CDT
> g++ mainFrontListHasA.cpp

> a.out

Adding zero
Adding one
Adding two
Adding three
Adding four
Adding five
The front list contains 
five four three two one zero 

Copy of list: The front list contains 
five four three two one zero 

The copied list: The front list contains 
five four three two one zero 

Testing the Link-Based Front List:

Test isEmpty with an empty list:
OK

Adding names to the list:
List should contain
Jerry, Sue, Tom, Donna, Brent, Luke

List actually contains:
The front list contains 
Jerry Sue Tom Donna Brent Luke 


The name at the front of the list is Jerry

Test getLength and getEntry:


List has 6 entries, as follows:

1: Jerry
2: Sue
3: Tom
4: Donna
5: Brent
6: Luke

Test remove:


Removing first item (Jerry): 1; should be 1 (true)

After removing Jerry, list contains 5 items, as follows:
The front list contains 
Sue Tom Donna Brent Luke 


 Removing another item (Sue): 1; should be 1 (true)

After removing Sue, list contains 4 items, as follows:
The front list contains 
Tom Donna Brent Luke 


Test clear():


The list is empty after invoking clear().
======================================

Testing the List Operations:
The front list contains 
Jerry Sue Tom Donna Brent Luke 

isEmpty: returns 0; should be 0 (false)
getLength returns : 6; should be 6
remove(2): returns 1; should be 1 (true)
remove(1): returns 1; should be 1 (true)
remove(6): returns 0; should be 0 (false)
The front list contains 
Tom Donna Brent Luke 

getLength returns : 4; should be 4
clear: 
isEmpty: returns 1; should be 1 (true)
Attempt an illegal retrieval from position 6: 
Precondition Violated Exception: getEntry() called with an empty list or invalid position.
> ^Dexit

script done on April  8, 2016 08:01:26 AM CDT
