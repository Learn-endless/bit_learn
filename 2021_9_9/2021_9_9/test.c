#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//char* my_strcpy(char* dest, const char* sour)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(sour);
//	while (*sour)
//	{
//		*dest++ = *sour++;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxxxx";
//	char arr2[] = "abcdef";
//	char* p = my_strcpy(arr1, arr2);
//	printf("%s", p);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 11
typedef struct
{
	int elem[MAXSIZE];
	int len;
}sqlist;
void merge(sqlist* la, sqlist* lb, sqlist* lc)
{
	int i, j, k;
	i = j = k = 0;
	if (la->len + lb->len <= MAXSIZE)
	{
		while (i < la->len && j < lb->len)
		{
			if (la->elem[i] < lb->elem[j])
			{
				lc->elem[k] = la->elem[i];
				i++;
				k++;
			}
			else
			{
				lc->elem[k] = lb->elem[j];
				j++;
				k++;
			}
		}
		while (i < la->len)
		{
			lc->elem[k] = la->elem[i];
			i++;
			k++;
		}
		while (j < lb->len)
		{
			lc->elem[k] = lb->elem[j];
			j++;
			k++;
		}
		lc->len = la->len + lb->len;
	}
	else printf("out of bound");
}
void print(sqlist* l)
{
	int i;
	for (i = 0; i < l->len; i++)
	{
		printf("%d ", l->elem[i]);
	}
}
int main(void)
{
	sqlist la = { {1,2,5,8,9},5 };
	sqlist lb = { {2,4,7,18,21},5 };
	sqlist lc = { {0},0 };
	merge(&la, &lb, &lc);
	print(&lc);
	system("pause");
	return(0);
}