## Results of Code

The code worked as exepected I did have some issues with the pointers and binary search. The issues I faced with the pointers was remembering how they work. What I realized was that when you are using a pointer with a vector or an array is that without the " * " symbol you are talking about the place in memory that particular piece of the vector or array is stored. When you use " * " symbol you are now talking about the variable that is stored in that part of the vector or array. The binary search was tricky for me because I could not visually imagine how it searched through the vector. Once I understood that it checked the value it was given and compared it against to the mid point to rule out anything to the left or right of the vector. It would then continue to do this until either it found the number in the vector or it did not find it and would break and return false. 

## Linear No Pointers vs Pointers Execution Times

|      | Linear No Pointers | Linear Pointers | How Much Faster? |
|:----:|:------------------:|:---------------:|:----------------:|
| **Time** | 1.53569s       | 0.933342s       |1.645366864s Faster|
| **Found**| 237/1999       | 237/1999        |

The time it took to find all the values in the vector was shorter with Pointers because it didn't have to copy the vector every time it was called. 

## Binary No Pointers vs Pointers Execution Times



## Linear vs Binary Execution Times



## Debugging Symbols '-g' vs Optimizations


