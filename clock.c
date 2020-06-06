
#include <time.h>
#include <stdio.h>
 
int main()
{
        char temp[100]; 
        time_t current_time = time(NULL);
        struct tm *tm = localtime(&current_time);
        strftime(temp, sizeof(temp), "%c", tm);
        printf("\nThe time is now:\n");
        printf("\n%s\n\n", temp);
        return 0;
}
