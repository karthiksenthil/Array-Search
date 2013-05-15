# PROGRAM TO SEARCH FOR AN ELEMENT IN AN ARRAY

Aim:

This program implements the efficient searching for an element of an array.

Logic Used:

*Binary Search*

Methods Used In The Program :

1) Sort_Array
   
       Since the prerequisite of implementing binary search is a sorted array , the user input array is sorted in ascending order.

2) Binary_Search

      The logic involved in binary search is as follows:
   
       a) Three variables named beg,mid and end keep track of the beginning,middle and the last element of the array respectively. 

       b) The element to be searched is first compared with the middle element of the array.
    
       c) If the element is equal to the middle element return the position of the middle element .
  
       d) Else if the element is greater than mid :
    
            i) The array is virtually shrunk by making beg point to element after mid.
        
       e)Else
    
            i) The array is shrunk this time by making end point to element before mid.

       f) This step is repeated till beg equals end .



Implementation:

The implementation of this program is done using C language and using the **binary search** and **bubble sort** algorithms(for  sorting).


Advantages:

Since binary search **divides the array into halves everytime** , the search method is *faster* and hence *more efficient*, unlike the linear search where each element is compared and checked everytime.