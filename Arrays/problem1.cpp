int main()
{

int convert0to5(int num){
    if(num == 0)
        return 0;

    int digit = n%10;
    if(digit == 0)
        digit = 5;

    return convert0to5(n/10)*10 + digit;
}

int convert5(int n){
    if(n == 0)
        return 5;

    else
        return convert0to5(n);
}


}