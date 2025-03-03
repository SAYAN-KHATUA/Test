main()
{
    int a , b , c;
    a = 5;
    b = 10;
    c = mul(a,b);
    printf("Multiplication of %d andn %d is %d = ",a,b,c);
}
mul(x,y)

int p,x,y;
{
    p = x * y;
    return(p);
}
// #define PERIOD 10
// #define PRINCIPAL 5000.00
// main()
// {
//     int year;
//     float amount , value , inrate;
//     amount = PRINCIPAL;
//     inrate = 0.11;
//     year = 0;
//     while(year <= PERIOD)
//     {
//         printf("%2d        %8.2f\n",year,amount);
//         value = amount + inrate * amount;
//         year = year+1;
//         amount = value;
//     }
// }