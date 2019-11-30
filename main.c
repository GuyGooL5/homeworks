#include <stdio.h>
/*Exercises declerations*/
void Ex1();
void Ex2();
void Ex3();
void Ex4();
void Ex5();
void Ex6();

/*helper functions declaration*/
int median_of_three(int a, int b, int c);
int highest_digit(int n);
int longest_rainy_days_seq(int n);
int multiply(int a, int b);
double series_sum(int n, double x);
int sum_proper_divisors(int n);
/*main function*/
int main()
{
    Ex6();
    return 0;
}
/***************************
 * Excercise 1
 * ************************/

void Ex1()
{
    int a, b, c;
    printf("Enter three integers: \n");
    // scanf("%d%d%d",&a,&b,&c);
    printf("The median one is: %d\n", median_of_three(-10, 10, 1));
    printf("The median one is: %d\n", median_of_three(-120, 120, 331));
    printf("The median one is: %d\n", median_of_three(-10, -10, 1231));
    printf("The median one is: %d\n", median_of_three(-10, 10, 10));
    printf("The median one is: %d\n", median_of_three(-10, 0, 10));
}

/*This function takes three integers and returns the middle one of the three.*/
int median_of_three(int a, int b, int c)
{
    /*first check if there's an equivallence between either two of the three*/
    if (a == b || b == c || a == c)
        /*first test if a==b, if so returns a,otherwise returns c as b is the same as a and the only option left is b==c*/
        return a == b ? a : c;
    //if a is greater than b that means a is either middle or high
    if (a > b)
        /*if a is smaller than c that means it's middle otherwise it means c is middle*/
        return a < c ? a : c;

    /*this step occours only if b is bigger than a, so if it's smaller than c that means it's middle, otherwise c is middle*/
    return b < c ? b : c;
}
/***************************
 * Excercise 2
 * ************************/

void Ex2()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Highest digit is: %d", highest_digit(n));
}

int highest_digit(int n)
{
    /*temp value to store max digit*/
    int max = 0;
    /*this loop runs until n reaches 0*/
    while (n)
    {
        /*this ternary expression tests if max is greater than n (mod)10,
         which gives the last digit since it's a decimal number.
         then returns either itself if its bigger or that said number
        */
        max = max > n % 10 ? max : n % 10;
        /*each iteration n is divided by 10 to go one digit left until it's division reaches 0 and the loop is broken.*/
        n /= 10;
    }
    return max;
}

/***************************
 * Excercise 3
 * ************************/
void Ex3()
{
    int n, index;
    printf("Enter the amount of days tested: ");
    scanf("%d", &n);
    /*sets index as the reciever of this function*/
    index = longest_rainy_days_seq(n);

    printf("The longest sequence started at day %d", index);
}

int longest_rainy_days_seq(int n)
{
    /**
     * i : loop iterator
     * curr_index : the current index of a sequence starting point
     * high_index : the index of the longest sequnce
     * seq: the current sequence length (starting at 0 since there's no sequnce to begin with)
     * seq_max: the longest sequence yet
     * mm : millimenets of rain each day
     */
    int i = 1, curr_index, high_index, seq_max = 0, seq = 0, mm;

    for (i; i <= n; i++)
    {
        printf("Enter the amount of rain of day %d: ", i);
        scanf("%d", &mm);
        /*test if there's currently no sequence and it was raining */
        if (seq == 0 && mm)
        {
            /*sets new starting index*/
            curr_index = i;
            /*we can add to the sequence since its it's first iteration*/
            seq = 1;
            /*since it's the starting of the sequnce we can finish this iteration and run the next one for further comparison*/
            continue;
        }
        if (seq)
        {
            /*test if it's not raining today*/
            if (mm == 0)
            {
                /**since it's the end of the sequence we can compare it's length to the longest sequence yet
                 * and then if this seq is longer, set it as the new longest sequence, and also set the current sequence's index as highest index.
                 * */
                if (seq_max < seq)
                {
                    seq_max = seq;
                    high_index = curr_index;
                }
                /*now let's reset the sequence to await a new one and continue to new iteration*/
                seq = 0;
                continue;
            }
            /*since it's raining today we can count this sequence*/
            seq++;
        }
    }
    /**
     * last comparison of sequence since the last day can't compare to another inside the loop
     * also we can only set index with ternary comparison*/
    high_index = seq_max < seq ? curr_index : high_index;
    return high_index;
}

/***************************
 * Excercise 4
 * ************************/
void Ex4()
{
    int a, b;
    printf("Enter two numbers to multiply them: ");
    scanf("%d%d", &a, &b);
    printf("%d*%d=%d", a, b, multiply(a, b));
}

/**
 * I'll leave it here just to show that there is a simpler solution
 * yet i'm not sure if it's acceptable

int multiply_cheaty_way(int a, int b)
{
    return a / (1 / b);
}
*/

int multiply(int a, int b)
{
    /*sum will store the final result*/
    int sum = 0;
    /**
     * test if which number is bigger since it's easier to multiply bigger in smaller 
     * (i.e 3*4 =3+3+3+3 where 4*3=4+4+4 which mean fewer operations*/
    if (b > a)
    {
        /*if `b` is bigger i'll switch their values*/
        a += b;
        b = a - b;
        a -= b;
    }
    /**
     * I'll use log(2)n effiecency
     * to do so i'll increment `a` by itself and cut `b` by half each iteration and add every odd division to sum 
    */

    /*this loop runs until `a` reaches 0 by dividing*/
    while (b)
    {
        /**
         * the sum adds `a` times 2 each round
         * this method works for powers of two as well since it will eventually reach (b=1) and 1/2 leaves 1 mod*/
        if (b % 2)
            sum += a;
        /*`a` is incremented by itself, which can also be written as a*=2; but mult isn't allowed.*/
        a += a;
        /*each iteration `a` divides by 2*/
        b /= 2;
    }
    return sum;
}

/***************************
 * Excercise 5
 * ************************/
void Ex5()
{
    int n;
    double x;
    printf("Enter series length and then real number to apply it on: ");
    scanf("%d%lf", &n, &x);
    printf("The sum is %.3lf", series_sum(n, x));
}

double series_sum(int n, double x)
{
    /** power starts with one since it's first multiplication in the loop causes it to be and even-numbered power
     *  for example power=1*x*x;
     * 
     * factorial starts with 1 as well since it's multiplication
     * 
     * sum will start with 1 as the series starts with 1 -....*/
    int factorial = 1;
    double power = 1, sum = 1;
    for (int i = 1; i <= n; i++)
    {
        /*each iteration power is multiplied by x squared.*/
        power *= x * x;
        /*each iteration factorial is multiplied by i which accumulates it.*/
        factorial *= i;
        /**
         * sum will recieve negative or positive value depending on i if it's even or odd
         * where i%2?-1:1 returns -1 if it's odd and 1 if it's even, that multiplied by the accumulating value*/
        sum += (i % 2 ? -1 : 1) * power / factorial;
    }
    return sum;
}

/***************************
 * Excercise 6
 * ************************/
int count_divs(int n)
{

    if (n == 1)
        return 1;
    if (n == 2 || n == 3)
        return 1;
    int i = 2, sum = 1;
    for (i; i * i <= n; i++)
    {
        if (!(n % i))
            sum += 2;
    }
    if (n / i == i)
        sum--;
    return sum;
}

void Ex6()
{
    int n,bigger=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t|%d\t|%d\n", i, count_divs(i), sum_proper_divisors(i));
    }
}

void amicables_in_range(int n){
    int biggest_sum;
}


int sum_proper_divisors(int n)

{
    if (n == 1)
        return 1;
    if (n == 2 || n == 3)
        return 1;
    int i = 2, sum = 1;
    for (i; i * i <= n; i++)
    {
        if (!(n % i))
            sum += i + n / i;
    }
    if (n / i == i)
        sum -= i;
    return sum;
}
