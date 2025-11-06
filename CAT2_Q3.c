/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
*/#include <stdio.h>

int main()
{
    FILE *in, *out;
    int i, num, sum = 0;
    float avg;

    in = fopen("input.txt", "w");
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        fprintf(in, "%d\n", num);
    }
    fclose(in);

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    for (i = 0; i < 10; i++)
    {
        fscanf(in, "%d", &num);
        sum += num;
    }

    avg = (float)sum / 10;
    fprintf(out, "Sum = %d\nAverage = %.2f\n", sum, avg);

    fclose(in);
    fclose(out);

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "r");

    printf("\n--- input.txt ---\n");
    while (fscanf(in, "%d", &num) == 1)
    {
        printf("%d\n", num);
    }

    printf("\n--- output.txt ---\n");
    char line[50];
    while (fgets(line, sizeof(line), out))
    {
        printf("%s", line);
    }

    fclose(in);
    fclose(out);

    return 0;
