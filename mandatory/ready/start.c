#include "../push_swap.h"

void	pushswap_start(t_node **a, t_node **b, t_info *info)
{
	// print_list(&a);
	if (check_duplication(*a) == -42)
		print_error(-42);
	if (check_sort(*a) == 1)
		exit(1);
	get_chunk(a, b, info);
	//return (a);
	// printf("get_chunk : \n");
	// print_list(&a);
}
