#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unity.h"

int solution(int A[], int N)
{
    int res = A[0];
    for(int i=1; i<N;++i)
    {
        res^=A[i];
    }
    return res;

}



void setUp(void) 
{
    printf("\nUnity Test started.\n");
}

void tearDown(void) 
{
    printf("\nUnity Test ended.\n");
}
void odd_occurrences_in_array(void) 
{
    int A[] = {1,1,2,2,3,3,3};
    TEST_ASSERT_EQUAL_INT( 3, solution(A,7));
}

int main()
{

    UNITY_BEGIN();
    RUN_TEST(odd_occurrences_in_array);
    return UNITY_END();
}
