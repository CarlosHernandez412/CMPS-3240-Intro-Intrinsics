#include <stdio.h>
#include <stdlib.h>
#include "myblas.h"
#include <xmmintrin.h>

#define SIZE 100000000

int main( void ) {
        printf ( "Benchmarking FAXPY operation on an array of size %d x 1\n", SIZE);

            float *x = (float *) malloc(SIZE * sizeof(float) );
                float *y = (float *) malloc(SIZE * sizeof(float) );
                    float *result = (float *) malloc(SIZE * sizeof(float) );
                        faxpyo (SIZE, 1.0, x, y, result);

                          _mm_free(x);
                              _mm_free(y);
                                  _mm_free(result);
                                           return 0;
}
