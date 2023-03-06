#include <stdio.h>
int dotP(int A[], int B[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res + B[i] * A[i];
    }
    return res;
};

int main(void)
{
    int A[] = {1,2,3};
    int B[] = {2,4,5};

    printf("%d", dotP(A,B,3));

}