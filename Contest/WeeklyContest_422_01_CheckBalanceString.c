bool isBalanced(char* num) {
    unsigned long long odd_bit_value = 0, even_bit_value = 0;
    unsigned int bit = 1, len = 0;

    for (len = 0; *num != '\0'; len++) {
        printf("num[%d] %d\n", len, (*num - '0'));
        if (len % 2 == 1)
            odd_bit_value += (*num - '0');
        else
            even_bit_value += (*num - '0');
        printf("odd value %d, even %d\n", odd_bit_value, even_bit_value);
        num++;
    }
    printf("odd value %d, even %d\n", odd_bit_value, even_bit_value);

    if (odd_bit_value == even_bit_value)
        return true;
    else
        return false;
}
