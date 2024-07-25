#include <stdio.h>

int main()
{
    short t;
    char s[10], T[10];

    scanf("%hd\n", &t);

    while (t--)
    {
        fgets(s, sizeof(s), stdin);
        fgets(T, sizeof(T), stdin);

        char m[10] = "";
        for (int i = 0; i < 5; i++)
        {

            if (s[i] == T[i])
                m[i] = 'G';
            else
                m[i] = 'B';
        }
        printf("%s", m);
        printf("\n");
    }
    return 0;
}
