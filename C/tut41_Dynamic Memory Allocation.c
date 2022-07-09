malloc():
Syntax:
ptr = (ptr-type*) malloc(size_in_bytes)
For example:

int *ptr;
ptr = (int*) malloc (3* sizeof(int))


calloc():
Syntax: 

ptr = (ptr-type*) calloc(n,size_in_bytes)
For example:

int *ptr;
ptr = (int*) malloc (10, sizeof(int))


realloc():
Syntax: 

ptr = (ptr-type*) realloc(ptr,new_size_in_bytes)
For example:

ptr = (int*) realloc (ptr, 5* sizeof(int))