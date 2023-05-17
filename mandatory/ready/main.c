#include "../push_swap.h"

void leaks()
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_info	info;
	char	**get;
	// t_node  *temp;
	
	atexit(leaks);
	a = NULL;
	b = NULL;
	get = NULL;
	if (ac < 2)
		print_error(-42);
	get = parsing(&a, ac, av);
	if (!get)
		return (0);
	// pushswap_start(a, b, &info);
	// temp = a;
	// print_list(&temp);
	// pb(&a, &b, 1);
	// rra(&a, 1);
	// pa(&a, &b, 1);
	// temp = a;
	// while (temp)
	// {
	// 	printf("%d ", temp->value);
	// 	temp = temp->next;
	// }
	pushswap_start(&a, &b, &info);
	//  printf("push_swap complete\n");
	// print_list(&temp);
	// temp = a;
	// while (temp)
	// {
	// 	printf("%d ", temp->value);
	// 	temp = temp->next;
	// }
	// printf("push_swap complete\n");
	// print_list(&a);
	ft_lstclear(&a);
	ft_lstclear(&b);
}