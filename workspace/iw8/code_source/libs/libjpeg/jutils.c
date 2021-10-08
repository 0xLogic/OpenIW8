/*
==============
jcopy_block_row
==============
*/
void jcopy_block_row(__int16 (*input_row)[64], __int16 (*output_row)[64], unsigned int num_blocks)
{
  memcpy_0(output_row, input_row, (unsigned __int64)num_blocks << 7);
}

/*
==============
jcopy_sample_rows
==============
*/
void jcopy_sample_rows(unsigned __int8 **input_array, int source_row, unsigned __int8 **output_array, int dest_row, int num_rows, unsigned int num_cols)
{
  int v6; 
  const void **v7; 
  void **i; 
  const void *v9; 
  void *v10; 

  v6 = num_rows;
  v7 = (const void **)&input_array[source_row];
  for ( i = (void **)&output_array[dest_row]; v6 > 0; --v6 )
  {
    v9 = *v7++;
    v10 = *i++;
    memcpy_0(v10, v9, num_cols);
  }
}

/*
==============
jdiv_round_up
==============
*/
__int64 jdiv_round_up(int a, int b)
{
  return (unsigned int)((a + b - 1) / b);
}

/*
==============
jround_up
==============
*/
__int64 jround_up(int a, int b)
{
  return (unsigned int)(a + b - 1 - (a + b - 1) % b);
}

/*
==============
jzero_far
==============
*/
void jzero_far(void *target, unsigned __int64 bytestozero)
{
  memset_0(target, 0, bytestozero);
}

