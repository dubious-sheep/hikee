#Question:

### Largest and Second Largest

You are given an array AA of NN integers.  
Find the **maximum** sum of **two distinct** integers in the array.

**Note:** It is guaranteed that there exist at least two distinct integers in the array.

### Input Format

-   The first line of input will contain a single integer TT, denoting the number of test cases.
-   Each test case consists of multiple lines of input.
    -   The first line of each test case contains single integer NN — the size of the array.
    -   The next line contains NN space-separated integers, denoting the array AA.

### Output Format

For each test case, output on a new line, the maximum sum of two distinct integers in the array.

### Constraints

-   1≤T≤10001≤T≤1000
-   2≤N≤1052≤N≤105
-   1≤Ai≤10001≤Ai​≤1000
-   The sum of NN over all test cases does not exceed 2⋅1052⋅105.

### Sample 1:

```
Input
4
3
4 1 6
7
3 7 2 1 1 5 3
5
8 2 9 4 9
2
1 2
```

```
Output
10
12
17
3
```

### Explanation:

**Test case 11:** The maximum sum of two distinct elements is 4+6=104+6=10 .

**Test case 22:** The maximum sum of two distinct elements is 7+5=127+5=12.

**Test case 33:** The maximum sum of two distinct elements is 8+9=178+9=17.

**Test case 44:** The maximum sum of two distinct elements is 1+2=31+2=3.
