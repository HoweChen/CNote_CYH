#include<stdio.h>

#define Queens 5 /*皇后数量*/
#define Output 1 /*(Output=0 or 1)，Output用于选择是否输出具体解,为1输出，为0不输出*/
int A[Queens * 3], B[Queens * 3], C[Queens * 3], k[Queens + 1][Queens + 1];
int inc, *a = &A[Queens], *b = &B[Queens], *c = &C[Queens];

void lay(int i) {
    int j = 0, t, u;
    while (++j <= Queens)
        if (a[j] + b[j - i] + c[j + i] == 0) {
            k[i][j] = a[j] = b[j - i] = c[j + i] = 1;
            if (i < Queens)lay(i + 1);
            else {
                ++inc;
                if (Output) {
                    for (printf("(%d)\n", inc), u = Queens + 1; --u; printf("\n"))
                        for (t = Queens + 1; --t;)k[t][u] ? printf("Q ") : printf("+ ");
                    printf("\n\n\n");
                }
            }
            a[j] = b[j - i] = c[j + i] = k[i][j] = 0;
        }
}

int main(void) {
    lay(1);
    printf("%d皇后共计%d个解", Queens, inc);
    getchar();
    return 0;
}