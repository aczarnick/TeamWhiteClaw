#include <stdio.h>

int *function(int *list, int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = list[j];
        list[i] = temp;
    }
    return list;
}

void print(int *const list, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", list[i]);
}

int main()
{
    int list[] = {1, 2, 3, 4, 5, 6};
    int *p = function(list, 6);
    print(p, 6);
    return 0;
}