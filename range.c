#include <stdio.h>
#include <stdlib.h>

void print1D(const int arr[], const int size) {
   printf("[ s=%d |", size);
   for (int i = 0; i < size; i++) {
      printf(" %d", arr[i]);
   }
   printf(" ]\n");
}

int *generateRange(int start, int end, int *refSize) {
   if (start > end) {
      *refSize = 0;
      return NULL;
   }
   *refSize = end - start + 1;
   int *range = malloc(*refSize * sizeof(int));
   if (range == NULL) {
      *refSize = 0;
      return NULL;
   }
   for (int i = 0; i < *refSize; i++) {
      range[i] = start + i;
   }
   return range;
}

int main(int argc, char **argv) {
   if (argc != 3) {
      printf("Usage: %s #start #end\n", argv[0]);
      return 1;
   }
   
   int start = atoi(argv[1]);
   int end = atoi(argv[2]);
   
   int size;
   int *range = generateRange(start, end, &size);
   
   if (range == NULL || size == 0) {
      printf("generateRange() is not implemented or returned NULL\n");
   }
   else {
      print1D(range, size);
      free(range);
   }
   
   return 0;
}