# Overview

I tested both recursive and iterative functions of sorting. I started with very small arrays of 10 upto arrays of 1,000,000. I made two identical arrays so that the data won't affect the speed of the functions. I also limited the random numbers, e.g. 0-3, to see if that makes a difference. In order to keep track of time of each function I used the clock function. Since the clock function returns the time in processor ticks, I divided the answer with CLOCKS_PER_SEC in order to get the answer in real time seconds.


# Tests

| SIZE OF ARRAY TESTED | RECURSIVE SORT (sec) | ITERATIVE SORT (sec) | DIFFERENCE (sec) |
| -------------------- |:--------------------:| :-------------------:| ---------------- |
| 10     			   | 0  				  | 0   				 | 0				|
| 100    			   | 0  				  | 0   				 | 0                |
| 1000				   | 0  				  | 0 					 | 0                |
| 10000 			   | 0    				  | 0  					 | 0                |
| 100000 			   | 46    				  | 39   				 | 7                |
| 200000 			   | 184   				  | 158   				 | 26               |
| 300000			   | 416   				  | 357   				 | 59               |

### Random Numbers Limited

| SIZE OF ARRAY TESTED | RECURSIVE SORT (sec) | ITERATIVE SORT (sec) | DIFFERENCE (sec) | DIFFERENCE OF DIFFERENCES (sec) |
| -------------------- |:--------------------:| :-------------------:| :--------------: | ------------------------------- |
| 100000 			   | 38   				  | 34    				 | 2 				|            5                    |
| 200000 			   | 157  				  | 136   				 | 21               |            5                    |
| 300000			   | 354  				  | 305 				 | 49               |            10                   |


# Results

- Very small arrays, 0-10000, did not effect the speed so when I limited the random numbers I only tested very large arrays.
- As the array got really big the difference in time between the two functions got bigger.
- Arrays that were bigger than 300000 took too long for my computer to process so I was not able to complete those processes.
- The random numbers being limited did not affect the outcome

	
# Conclusions

In conclusion I found that the iterative bubble sort was faster than recursive. As the arrays get bigger the recursion function got even slower. The recursion function is slower because it calls the whole function everytime it's over which is more work than just jumping back to an earlier spot in the code.
