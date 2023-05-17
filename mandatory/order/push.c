#include "../push_swap.h"

void	pa(t_node **a, t_node **b, int flag)
{
	t_node	*temp;

	if (*b == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
	if (flag == 1)
		write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b, int flag)
{
	t_node	*temp;

	if (*a == NULL)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
	if (flag == 1)
		write(1, "pb\n", 3);
}
