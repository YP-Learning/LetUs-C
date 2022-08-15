#include <stdio.h>

void display_array(int* arr, size_t size)
{
    printf("[");

    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    
    printf("]\n");
}

int* create_array(size_t size)
{
    int* arr = (int*) calloc(size, sizeof(int));
    
    if ( arr == NULL )
    {
        fprintf(stderr, "Calloc: Out Of Memory");
        exit(EXIT_FAILURE);
    }

    return arr;
}

void get_array(int* array, size_t size, const char* message) 
{
    put(message);

    for ( int i = 0; i < size; i++ )
    {
        scanf("%d", &array[i]);
    }   
}
