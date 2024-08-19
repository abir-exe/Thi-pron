#include <stdio.h>
int main()
{
    int N,V;
    scanf("%d", &N);
    int pos=0, neg=0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &V);
        if(V<0){
            neg= neg+V;
        }
        else if(V>0){
            pos = pos + V;
        }
    }
    printf("%d %d", pos, neg);
    return 0;
}