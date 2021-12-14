# Pisano period 

-used in problem number 5 (fibonnaci number again)-.

**Definition:** It is the period with which the sequence of Fibonacci numbers taken modulo n repeats.

It is always starts with 01.

<img src="https://user-images.githubusercontent.com/66208099/145990641-8c511dc1-8879-4381-9c70-d7b1a63ed81d.png" width="500" height="200">

For M = 2, the period is 011 and has length 3 while for M = 3 the sequence repeats after 8 nos.

**Example:**

if we want to get fib(545)%5

    first, we obtain the pisano period which is 20 for module 5
    
    second, we calculate 545 % 20 = 5
    
    finally, we calculate 5%5  = 0
    
    
5%5 is the same answer of fib(545)%5, the only differece is that we are avoiding to use recursive approach to keep calculating N Fibonacci numbers with a time complexity of O(2N). Even an iterative or a Dynamic Programming approach with an algorithm looping for N iterations will not be time-efficient.

So the most efficient approach for this problem is Pisano Period.
