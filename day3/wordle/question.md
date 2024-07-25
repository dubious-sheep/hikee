#Question:

### Wordle

Chef invented a modified wordle.

There is a hidden word SS and a guess word TT, both of length 55.

Chef defines a string MM to determine the correctness of the guess word. For the ithith index:

-   If the guess at the ithith index is correct, the ithith character of MM is GG.
-   If the guess at the ithith index is wrong, the ithith character of MM is BB.

Given the hidden word SS and guess TT, determine string MM.

### Input Format

-   First line will contain TT, number of test cases. Then the test cases follow.
-   Each test case contains of two lines of input.
-   First line contains the string SS - the hidden word.
-   Second line contains the string TT - the guess word.

### Output Format

For each test case, print the value of string MM.

You may print each character of the string in uppercase or lowercase (for example, the strings BgBgBBgBgB, BGBGBBGBGB, bgbGBbgbGB and bgbgbbgbgb will all be treated as identical).

### Constraints

-   1≤T≤10001≤T≤1000
-   ∣S∣=∣T∣=5∣S∣=∣T∣=5
-   S,TS,T contain uppercase english alphabets only.

### Sample 1:

```
Input
3
ABCDE
EDCBA
ROUND
RINGS
START
STUNT
```

```
Output
BBGBB
GBBBB
GGBBG
```

### Explanation:

**Test Case 11:** Given string S=ABCDES=ABCDE and T=EDCBAT=EDCBA. The string MM is:

-   Comparing the first indices, A≠EA=E, thus, M[1]=BM[1]=B.
-   Comparing the second indices, B≠DB=D, thus, M[2]=BM[2]=B.
-   Comparing the third indices, C=CC=C, thus, M[3]=GM[3]=G.
-   Comparing the fourth indices, D≠BD=B, thus, M[4]=BM[4]=B.
-   Comparing the fifth indices, E≠AE=A, thus, M[5]=BM[5]=B.  
     Thus, M=BBGBBM=BBGBB.

**Test Case 22:** Given string S=ROUNDS=ROUND and T=RINGST=RINGS. The string MM is:

-   Comparing the first indices, R=RR=R, thus, M[1]=GM[1]=G.
-   Comparing the second indices, O≠IO=I, thus, M[2]=BM[2]=B.
-   Comparing the third indices, U≠NU=N, thus, M[3]=BM[3]=B.
-   Comparing the fourth indices, N≠GN=G, thus, M[4]=BM[4]=B.
-   Comparing the fifth indices, D≠SD=S, thus, M[5]=BM[5]=B.  
     Thus, M=GBBBBM=GBBBB.
