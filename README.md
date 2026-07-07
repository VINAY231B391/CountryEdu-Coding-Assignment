# CountryEdu-Coding-Assignment

Candidate Details

Name: Vinay Bansal

Programming Language: C++

Question 1
Problem

Substring with Concatenation of All Words

Approach

For this problem, I checked every possible starting position in the given string. From each position, I tried to match all the given words exactly once in any order using recursion. If all the words matched successfully, I stored that starting index in the answer.

Note: The code contains both examples given in the assignment. To avoid running both examples together, one example is kept active while the other is commented in the main() function. You can uncomment the required example and comment the other one to test it.

Time Complexity

O(n × k!)

Space Complexity

O(k)

Question 2
Problem

Letter Combinations of a Phone Number

Approach

I used recursion (backtracking) to generate all possible letter combinations. For each digit, I selected every possible letter from the keypad and continued the same process for the remaining digits. At the end, all combinations are printed along with the total number of combinations.

Time Complexity

O(4^n)

Space Complexity

O(n)


Files Included
Question1.cpp – Solution for Question 1
Question2.cpp – Solution for Question 2

