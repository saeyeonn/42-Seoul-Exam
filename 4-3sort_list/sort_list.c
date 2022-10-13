int ft_count_list(t_list *list)
{
	int count = 1;
	while (list -> next)
	{
		list = list -> next;
		count++;
	}
	return (count);
}

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

t_list *sort_list(t_list *list, int (cmp*)(int, int))
{
	int count = ft_count_list(list);
	
	while (count > 0)
	{
		list = begin_list;
		while (list -> next)
		{
			if (cmp(list->data, list->next->data) == 0)
				ft_swap(&list->data, &list->next->data);
			list = list -> next;
		}
		count--;
	}
}

int main()
{
	t_list *list1;
	t_list *list2;
	t_list *list3;
	t_list *list4;
	t_list *list5;
