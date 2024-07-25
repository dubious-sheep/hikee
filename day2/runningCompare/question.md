#Question:

### Running Comparison

Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for NN days — on the ithith day, Alice ran AiAi​ meters and Bob ran BiBi​ meters.

On each day,

-   Alice is *unhappy* if Bob ran **strictly more than twice** her distance, and *happy* otherwise.
-   Similarly, Bob is *unhappy* if Alice ran **strictly more than twice** his distance, and *happy* otherwise.

For example, on a given day

-   If Alice ran 200200 meters and Bob ran 500500, Alice would be unhappy but Bob would be happy.
-   If Alice ran 500500 meters and Bob ran 240240, Alice would be happy and Bob would be unhappy.
-   If Alice ran 300300 meters and Bob ran 500500, both Alice and Bob would be happy.

On how many of the NN days were **both** Alice and Bob happy?

### Input Format

-   The first line of input will contain a single integer TT, denoting the number of test cases.
-   Each test case consists of three lines of input.
    -   The first line of each test case contains a single integer NN — the number of days.
    -   The second line of each test case contains NN space-separated integers A1,A2,…,ANA1​,A2​,…,AN​ — the distances run by Alice on the NN days.
    -   The third line of each test case contains NN space-separated integers B1,B2,…,BNB1​,B2​,…,BN​ — the distances run by Bob on the NN days.

### Output Format

For each test case, output on a new line the number of days when **both** Alice and Bob were happy.

### Constraints

-   1≤T≤10001≤T≤1000
-   1≤N≤1001≤N≤100
-   1≤Ai,Bi≤1051≤Ai​,Bi​≤105

### Sample 1:

```
Input
4
3
100 200 300
300 200 100
4
1000 1000 1000 1000
400 500 600 1200
4
800 399 1400 532
2053 2300 3400 23
5
800 850 900 950 1000
600 800 1000 1200 1400
```

```
Output
1
3
0
5
```

### Explanation:

**Test case 11:** Alice is unhappy on the first day, since she ran 100100 meters but Bob ran 300300; and 300300 is more than twice of 100100.  
Similarly, Bob is unhappy on the third day.  
Both Alice and Bob are happy on the second day, so the answer is 11.

**Test case 22:** Bob is unhappy on day 11 and happy on every other day, while Alice is happy on every day. So, they're both happy on three days — the second, third, and fourth.

**Test case 33:** Alice is unhappy on days 1,2,31,2,3 and Bob is unhappy on day 44.

**Test case 44:** Alice and Bob are both happy on all five days.
