#include <stdio.h>
#include <string.h>
#define MAX_STR 10000
int main()
{
    char str[MAX_STR];
    int n;
    FILE *fp = fopen("input.txt", "r++");
    fscanf(fp, "%d", &n);

    int n_step = 0;
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%s", str);
        for (int j = 0; j < strlen(str) / 2; j++)
        {
            int temp = str[j] - str[strlen(str) - j - 1];
            n_step += (temp > 0 ? temp : (-temp));
        }
        printf("%d\n", n_step);
        n_step = 0;
    }

    return 0;
}
