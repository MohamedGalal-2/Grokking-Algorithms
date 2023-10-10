1. Suppose you have a sorted list of 128 names, and you’re searching
through it using binary search. What’s the maximum number of
steps it would take?

Answer->
Log2(128)
2^7=128
The maximum number ofsteps it would take is 7

2. Suppose you double the size of the list. What’s the maximum
number of steps now?

Answer->
	log2(128*2)
	2^8=256
	The maximum number ofsteps it would take is =8
--------------------------------------------------------------------
3. You have a name, and you want to find the person’s phone number
in the phone book. 

Answer->
	In case of we use 
	1. Linear Search=>
			O(n)
	2. Binary Search=>    
			O(log2(n))
--------------------------------------------------------------------
4. You have a phone number, and you want to find the person’s name
in the phone book. (Hint: You’ll have to search through the whole
book!)

Answer=>
	O(n)
--------------------------------------------------------------------
5. You want to read the numbers of every person in the phone book.

Answer=>
	O(n)
--------------------------------------------------------------------
6. You want to read the numbers of just the As. (This is a tricky one!
It involves concepts that are covered more in chapter 4. Read the
answer—you may be surprised!)

Answer=>
	O(n)
