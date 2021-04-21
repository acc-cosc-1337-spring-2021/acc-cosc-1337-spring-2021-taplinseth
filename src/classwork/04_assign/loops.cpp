//cpp

int factorial(int num)
{
    int result = num;
    for (int i = num-1; i > 0; i--)
        result = result*i;
    return result;
}