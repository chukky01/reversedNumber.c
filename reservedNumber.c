int main(void)
{
    int n,r;

    //Prompt the user for a number
    //store the input as the value of n
    printf("Enter a number and I will print out its reverse: ");
    scanf("%d", &n);

    //while the value of n is greater than zero
    while (n > 0)
    {
        //assign to r the value of the remainder when n is divided by 10
        r = n% 10;

        //prints out the reversed number to screen
        printf("%d", r);

        //n is the assigned the value when n is divided by 10
        n = n/10;
    }

    return 0;
}
