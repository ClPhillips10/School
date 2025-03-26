#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init2D(const int numRows, const int numCols, int twoD[][numCols]) {
   for (int r = 0; r < numRows; r++) {
      for (int c = 0; c < numCols; c++) {
         twoD[r][c] = rand() % 100;
      }
   }
}

void print2D(const int numRows, const int numCols, const int twoD[][numCols]) {
   printf("%d x %d\n", numRows, numCols);
   for (int r = 0; r < numRows; r++) {
      for (int c = 0; c < numCols; c++) {
         printf("\t%d", twoD[r][c]);
      }
      printf("\n");
   }
}

void print1D(const int arr[], const int size) {
   printf("[ s=%d |", size);
   for (int i = 0; i < size; i++) {
      printf(" %d", arr[i]);
   }
   printf(" ]\n");
}

int *flatten2D(const int numRows, const int numCols, const int twoD[][numCols], int *refSize) {
   *refSize = 0;
   return NULL;
}

int main(int argc, char **argv) {
   if (argc == 1) {
      srand(time(NULL));
   }
   else {
      srand(atoi(argv[1]));
   }
   
   const int MIN_DIM = 2;
   const int MAX_DIM = 5;
   int numRows = rand() % (MAX_DIM + 1 - MIN_DIM) + MIN_DIM;
   int numCols = rand() % (MAX_DIM + 1 - MIN_DIM) + MIN_DIM;
   int twoD[numRows][numCols];
   
   init2D(numRows, numCols, twoD);
   print2D(numRows, numCols, twoD);
   printf("\n");
   
   int size;
   int *flat = flatten2D(numRows, numCols, twoD, &size);
   
   if (size == 0 || flat == NULL) {
      printf("flatten2D() is not implemented or returned NULL\n");
   }
   else {
      print1D(flat, size);
      free(flat);
   }
   
   return 0;
}
