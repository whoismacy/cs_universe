#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = {
        "William: SBM GSOH likes sports, TV, dining",
        "Matt: SWM NS likes art, movies, theater",
        "Luis: SLM ND likes books, theater, art",
        "Mike: DWM DS likes trucks, sports and bieber",
        "Peter: SAM likes chess, working out and art",
        "Josh: SJM likes sports, movies and theater",
        "Jed: DBM likes theater, books and dining"};

int sports_no_beiber(char *s)
{
	return strstr(s, "sports") && !strstr(s, "bieber");
}

int sports_or_workout(char *s)
{
	return strstr(s, "sports") || strstr(s, "working out");
}

int ns_theater(char *s)
{
	return strstr(s, "NS") && strstr(s, "theater");
}

int arts_theater_or_dining(char *s)
{
	return strstr(s, "arts") || strstr(s, "theater") || strstr(s, "dining");
}

void find(int(*catch)(char *))
{
        puts("Searching: ");
        puts("-------------------------------");

        for(int i = 0; i < NUM_ADS; i++)
        {
                if(catch(ADS[i]))
                {
                        printf("%s", ADS[i]);
                }
        }
        puts("--------------------------------");
}

int main()
{
	find(arts_theater_or_dining);
	printf("*******************");
	find(ns_theater);
	printf("*******************");
	find(sports_or_workout);
	printf("*******************");
        return 0;
}


