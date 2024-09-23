#include <stdio.h>
#include <string.h>

    char track [][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork", 
        "From here to Maternity",
        "The girl from Iwo Jima",  
    };
void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if(strstr(track[i], search_for))
        {
            printf("Track %i: %s\n", i+1, track[i]);
        }
    }
}
void print_reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len - 1;
    while (t >= s)
    {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}
int main()
{
    char search_for[] = "Maternity";
    char *string = "Biden";
    find_track(search_for);
    print_reverse(string);
    size_t lens = strlen(string);
    printf("%i", lens);
    return 0;
}