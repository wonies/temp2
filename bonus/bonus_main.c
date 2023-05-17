#include "push_swap_bonus.h"

void leaks()
{
	system("leaks checker");
}


int main(int ac, char **av)
{
    t_node	*a;
	t_node	*b;
    // t_node  *temp;
	char	**get;

    atexit(leaks);
	a = NULL;
	b = NULL;
	get = NULL;
	if (ac < 2)
		print_error(-42);
	get = parsing(&a, ac, av);
    if (check_duplication(a) == -42)
		print_error(-42);
    if (check_sort(a) == 1)
		exit(1);
	if (!get)
		return (0);
	 process_commads(&a, &b, 1);
    ft_lstclear(&a);
	ft_lstclear(&b);
}