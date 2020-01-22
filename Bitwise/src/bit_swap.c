int bit_swap(int num, int src_bit, int dest_bit)
{
    if(((num >> src_bit) & 1) != ((num >> dest_bit) & 1))
	{
    	num = num ^ ((1 << src_bit) | (1 << dest_bit)); 
	}
	
	return num;
}

void bit_swap_nums(int *snum, int *dnum, int src_bit, int dest_bit)
{
    if(((*snum >> src_bit) & 1) == ((*dnum >> dest_bit) & 1))
	{
		return;
	}
	
    *snum = *snum ^ (1 << src_bit); 
    *dnum = *dnum ^ (1 << dest_bit); 
}
