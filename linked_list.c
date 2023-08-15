#include<stdio.h>
#include<stdlib.h>

typedef struct ll
{
	struct ll *next;
	int data;
}ll;

void insert(ll *head)
{
	FILE *fp = fopen("input.txt", "r");
	if (fp== NULL)
	{
		printf("file not present \n");
		return;
	}
	else {
		if (head==NULL)
		{
			ll *ptr =head;
			ll *ptrbkp=ptr;
		}
		else
		{
			while(head->next !=NULL)
			{
				ll *ptrbkp=head;
				head=head->next;
			}
			ll *preptr=head;
		}
		{
			int number=0;
			while(fscanf(fp, "%d",&number) == 1)
			{
        			printf("%d\n", number);
      			}
			fclose(fp);
		}
		}
}

int main()
{
	insert(NULL);
	printf("inside main \n");
	return 0;
}
