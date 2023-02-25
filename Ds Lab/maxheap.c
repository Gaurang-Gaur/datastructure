
#include <stdio.h>
 #include <stdlib.h>

void heapify_up(int heap[], int i)
{
    int parent = (i - 1) / 2;

    if (heap[i] > heap[parent] && i > 0)
    {
        int temp = heap[i];
        heap[i] = heap[parent];
        heap[parent] = temp;
        heapify_up(heap, parent);
    }
}

void heapify_down(int heap[], int heap_size, int i)
{
    int largest = i;
    int left_child = 2 * i + 1;
    int right_child = 2 * i + 2;
    if (left_child < heap_size && heap[left_child] > heap[largest])
    {
        largest = left_child;
    }
    if (right_child < heap_size && heap[right_child] > heap[largest])
    {
        largest = right_child;
    }
    if (largest != i)
    {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        heapify_down(heap, heap_size, largest);
    }
}

void insert(int heap[], int *heap_size, int value)
{
    heap[*heap_size] = value;
    *heap_size += 1;
    heapify_up(heap, *heap_size - 1);
}

int extract_max(int heap[], int *heap_size)
{
    int max = heap[0];
    heap[0] = heap[*heap_size - 1];
    *heap_size -= 1;
    heapify_down(heap, *heap_size, 0);
    return max;
}

void build_heap(int heap[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify_down(heap, n, i);
    }
}

void heap_sort(int arr[], int n)
{
    int heap[n];
    int heap_size = 0;
    for (int i = 0; i < n; i++)
    {
        insert(heap, &heap_size, arr[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = extract_max(heap, &heap_size);
    }
}

int main()
{
    printf("Gaurang Gaur 2100320120066\n");

    int heap[] = {7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(heap) / sizeof(heap[0]);
    build_heap(heap, n);
    printf("Max heap: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", heap[i]);
    }
    printf("\n");
    heap_sort(heap, n);
    printf("Heap sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", heap[i]);
    }
    printf("\n");
    return 0;
}
