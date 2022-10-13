#include "ft_list.h"

typedef struct s_list{
	struct s_list *next;
	void	*data;
}	t_list;

int ft_count_list(t_list *begin_list)
{
	int count = 1;
	while (begin_list -> next)
	{
		count++;
		begin_list = begin_list -> next;
	}
	return (count);
}

void ft_list_foreach(t_list *begin_list, void(*f)(void*))
{
	int count = ft_count_list(begin_list);
	t_list *begin;
	begin = begin_list;
	while (begin_list->next)
	{
		f(begin_list->data);
		begin_list->next;
	}
	f(begin_list->next->data);
}
	
