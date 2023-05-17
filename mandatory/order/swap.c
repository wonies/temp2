#include "../push_swap.h"

void	sa(t_node **a, int flag)
{
	// int	temp;
	// int	temp_order;
    t_node  *tmp;

	if ((*a) && (*a)->next)
	{
		tmp = (*a)->next;
        (*a)->next = tmp->next;
        tmp->next = *a;
        *a = tmp;



        // temp = a->next->value;
		// a->next->value = a->value;
		// a->value = temp;
		// temp_order = a->next->order;
		// a->next->order = a->order;
		// a->order = temp_order;
	}
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	sb(t_node **b, int flag)
{
	// int	temp;
	// int	temp_order;
    t_node  *tmp;

	if ((*b) && (*b)->next)
	{
		tmp = (*b)->next;
        (*b)->next = tmp->next;
        tmp->next = *b;
        *b = tmp;

    }
	// if (b == NULL || b->next == NULL)
	// 	return ;
	// if (b != NULL && b->next != NULL)
	// {
	// 	temp = b->next->value;
	// 	b->next->value = b->value;
	// 	b->value = temp;
	// 	temp_order = b->next->order;
	// 	b->next->order = b->order;
	// 	b->order = temp_order;
	// }
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b, int flag)
{
	sa(a, 0);
	sb(b, 0);
	if (flag == 1)
		write(1, "ss\n", 3);
}
