Let us first redefine the problem.
​
So permutation of a string basically means just the reordering of the letters of the string. That means all the permutations of a string are just the anagrams of the string, with all the letters included, just in another way.
And we have to find if such a substring exists in s2 which is a permutation of s1, which means we have to find a substring in s2 such that the frequency of the characters in that substring is same as the frequency of the characters in s1.
So we will be using SLIDING WINDOW APPROACH to find such a window in s2 in which the freq of characters is same as s1.
​
Algorithm:
1. The first step is to find the freq of all characters of s1.
​
2. Then we will be starting with a window of size 1 initially in s2. That means start=0, end=0.
​
3. Along with this, we will also be maintaining the frequency of the characters in the current window.
​
4. We will be continuing the below steps untill we reach a situation where the end of the window reaches the end of s2. That means we will be doing the steps while end<length of s2.
a) Increase the frequency of the character which is just now newly included inside the window. That means increase the frequency of s2[end].
b) Now check if the frequency of the characters in the current window, is same as the frequency of characters int s1. But this is only possible if the length of current substring(window) is same as the length of s1. If this is true, then we can directly return true from here.
c) If the frequency doesnt match, we have to change the window:-
i) If the length of window in less than the length of s1, then we should increase the length of the the window by increasing the end. So end+=1.
ii) If not, that means length of window is greater than or equal to the length of s1, so we will need to move to a new window. For that we will have to move start to the next character but before that we will have to decrease the frequency of start character from the curr window frequency. That means
-Decrese the frequency of s2[start].
-Move start to the next element.
-Move end to the next element.
5. If the algorithm did not return true for any window, then we will reach here(out of the loop). This will mean that we did not find any such substring in s2. So return false.
​