#include <stdio.h>

// Calculate the mean of an array of values
float mean(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

// Calculate the variance of an array of values
float variance(float arr[], int size)
{
    float m = mean(arr, size);
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += (arr[i] - m) * (arr[i] - m);
    }
    return sum / (size - 1);
}

// Calculate the covariance of two arrays of values
float covariance(float arr1[], float arr2[], int size)
{
    float m1 = mean(arr1, size);
    float m2 = mean(arr2, size);
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += (arr1[i] - m1) * (arr2[i] - m2);
    }
    return sum / (size - 1);
}

int main()
{
    // Sample data
    float x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    float y[] = {2, 4, 5, 7, 8, 9, 11, 12, 13, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28, 30};
    int n = sizeof(x) / sizeof(float);

    // Calculate regression coefficients
    float b = covariance(x, y, n) / variance(x, n);
    float a = mean(y, n) - b * mean(x, n);

    // Print results
    printf("Regression equation: y = %f x + %f\n", b, a);

    return 0;
}
