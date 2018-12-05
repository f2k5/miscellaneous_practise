//AUG17Q25:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int undo_runs(char *line);

char s[20];

char temp[20] = {};
char *p = temp;
int j = 0;

int x = 0; //num of repeatitions
int main()
{
	strncpy(s, "fffffaaaaarrrrdddiin", 20);
	undo_runs(s);
	printf("%d %s\n", x, s);
}

int undo_runs(char *line)
{
	line = s;
	printf("%c\n", line[0]);
	int len = strlen(s);

	for (int i = 0; i < len-1; i++)
	{
		//new array will always get first element:
		if (j == 0) 
		{ 
			p[j] = line[0];
			j++; 
		}

		if (line[i] == line[i+1])
		{
			x++;
		}
		else
		{
			p[j] = line[i+1];
			j++; 
		}


	}
	int b = strlen(temp);
	printf("%d\n", b);

	//make the original s empty:
	strcpy(s, "\0");
	//printf("%d\n", strlen(s));
	//copy from temp to s:
	//b+1 - 1 extra room for the null char at the end!
	strncpy(s, temp, b+1);


	return x;

}
