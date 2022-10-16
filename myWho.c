#include<stdio.h>
#include<utmp.h>


struct utmp *getutent(void);
struct utmp *getutid(const struct utmp *ut);
struct utmp *getutline(const struct utmp *ut);

struct utmp *pututline(const struct utmp *ut);


int main()
{
	struct utmp *utmp_p;
	while((utmp_p = getutent()) != NULL)
	{
		if(utmp_p->ut_type == USER_PROCESS)
		{
			printf("%s ", utmp_p->ut_user);
			printf("%s ",utmp_p->ut_line);
		}
	}

	return 0;
}




