characters in s are put zigzag in order
-> characters in a row maintain their relative order in s
-> for each character in s, we figure out its row number and append to corresponding row data structure
​
We start at row 0, move down until we hit row numRows - 1
the move up until we hit row 0.
diff helps manage increment and decrement of curRow.