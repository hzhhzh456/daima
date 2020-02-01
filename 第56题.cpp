#include<stdio.h>
#include<assert.h>
int my_strlen(char* srt)
{
	assert(srt);
	if (*srt == '\0')
	{
		return 0;
	}
	else
	{    
		srt++;
		return (1 + my_strlen(srt));
		
	}
}
int main(void)
{
	char *arr = "abcdef";
	printf("%d\n", my_strlen(arr));
}

