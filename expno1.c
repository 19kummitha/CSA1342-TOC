#include<stdio.h>
#include<string.h>
const int final_state=1;
int main()
{
	int trans_table[4][2]={{1,2},{1,3},{2,2},{1,3}};
	char input_string[20],curr_input,i,l;
	int present_state,next_state,valid_input;
	printf("enter the string");
	scanf("%s",input_string);
	l=strlen(input_string);
	present_state=0;
	valid_input=1;
	for(i=0;i<l;i++)
	{
		curr_input=input_string[i];
		if(curr_input=='a')
		{
			next_state=trans_table[present_state][0];
		}
		else if(curr_input=='b')
		{
			next_state=trans_table[present_state][1];
		}
		else
		{
			valid_input=0;
			break;
		}
		present_state=next_state;
	}
	if(valid_input==0)
	{
		printf("invalid input\n");
	}
	else
	{
		if(present_state==final_state)
		{
			printf("the string %s is accepted\n",input_string);
		}
		else
		{
			printf("the string %s is not accepted ",input_string);
		}
	}
}
