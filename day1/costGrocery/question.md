#Question:

### Cost of Groceries

Chef visited a grocery store for fresh supplies. There are NN items in the store where the ithith item has a freshness value AiAi​ and cost BiBi​.

Chef has decided to purchase **all** the items having a freshness value **greater than equal to** XX. Find the total cost of the groceries Chef buys.

### Input Format

-   The first line of input will contain a single integer TT, denoting the number of test cases.
-   Each test case consists of multiple lines of input.
    -   The first line of each test case contains two space-separated integers NN and XX — the number of items and the minimum freshness value an item should have.
    -   The second line contains NN space-separated integers, the array AA, denoting the freshness value of each item.
    -   The third line contains NN space-separated integers, the array BB, denoting the cost of each item.

### Output Format

For each test case, output on a new line, the total cost of the groceries Chef buys.

### Constraints

-   1≤T≤1001≤T≤100
-   1≤N,X≤1001≤N,X≤100
-   1≤Ai,Bi≤1001≤Ai​,Bi​≤100

### Sample 1:

```
Input
4
2 20
15 67
10 90
3 1
1 2 3
1 2 3
3 100
10 90 50
30 7 93
4 50
12 78 50 40
40 30 20 10
```

```
Output
90
6
0
50
```

### Explanation:

**Test case 11:** Item 22 has freshness value greater than equal to X=20X=20. Thus, Chef buys item 22. The total cost is 9090.

**Test case 22:** Items 1,2,1,2, and 33 have freshness value greater than equal to X=1X=1. Thus, Chef buys all 33 items. The total cost is 1+2+3=61+2+3=6.

**Test case 33:** No item has freshness value greater than equal to X=100X=100. Thus, Chef buys no items.

**Test case 44:** Items 22 and 33 have freshness value greater than equal to X=50X=50. Thus, Chef buys items 22 and 33. The total cost is 30+20=5030+20=50.
