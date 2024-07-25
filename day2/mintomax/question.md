#Question:

### MIN To MAX

You are given an array AA of size NN.

Let MM be the **minimum** value present in the array initially.  
In one operation, you can choose an element AiAi​ (1≤i≤N)(1≤i≤N) and an integer XX (1≤X≤100)(1≤X≤100), and set Ai=XAi​=X.

Determine the **minimum** number of operations required to make MM the **maximum** value in the array AA.

### Input Format

-   The first line of input will contain a single integer TT, denoting the number of test cases.
-   Each test case consists of multiple lines of input.
    -   The first line of each test case contains a single integer NN - the size of the array.
    -   The next line of each test case contains NN space-separated integers A1,A2,…,ANA1​,A2​,…,AN​ - the elements of the array.

### Output Format

For each test case, output on a new line, the **minimum** number of operations required to make MM the **maximum** value in the array AA.

### Constraints

-   1≤T≤1001≤T≤100
-   1≤N≤1001≤N≤100
-   1≤Ai≤1001≤Ai​≤100

### Sample 1:

```
Input
3
2
1 2
4
2 2 3 4
1
1
```

```
Output
1
2
0
```

### Explanation:

**Test case 11:** The minimum value in the array, MM, is initially 11. We can use one operation as following:

-   Choose A2A2​ and set it as X=1X=1. Thus, the final array becomes [1,1][1,1].

Since all elements of the final array are 11, the maximum value of the array is now 11. It can be shown that this is the minimum number of operations required to do so.

**Test case 22:** The minimum value in the array, MM, is initially 22. We can use two operations as following:

-   Choose A4A4​ and set it as X=2X=2. Thus, the array becomes [2,2,3,2][2,2,3,2].
-   Choose A3A3​ and set it as X=2X=2. Thus, the array becomes [2,2,2,2][2,2,2,2].

Since all elements of the final array are 22, the maximum value of the array is now 22.

**Test case 33:** The minimum value in the array, MM, is initially 11. It is also the maximum value of the array. Hence, no operations are required.
