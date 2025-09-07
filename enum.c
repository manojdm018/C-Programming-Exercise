#include <stdio.h>


enum Months {January,February,March,April,May,June,July,August,September,October,November,December};
int main()
{
    enum Months current= January;

    printf("%d", current);

    return 0;
}

