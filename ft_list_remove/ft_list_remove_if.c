#include "ft_list.h"
#include <stdlib.h>

typedef struct **s_list{
	t_list **next;
	int *data;
} t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*i;

	i = *begin_list;
	while ((*begin_list)->next)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			tmp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(tmp);
		}
		*begin_list = (*begin_list)->next;
	}	
	while (i && i->next)
	{
		if (cmp(i->next->data, data_ref) == 0)
		{
			tmp = i->next;
			i->next = tmp->next;
			free (tmp);
		}
		i = i->next;
	}
}

#include <stdio.h>
int main()
{
	t_list **list;
	t_list **list1;
	t_list **list2;
	t_list **list3;
	t_list **list4;
	t_list **list5;
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = list5;
	list1->data = {4, 5};
	list2->data = {3, 4};
	list3->data = {4, 2};
	list4->data = {3, 4};
	list5->data = {1, 4};
	int data[] = {3, 4};
	list = list1;
	ft_list_remove_if(list, (void *)data, int (*cmp)())
	{





