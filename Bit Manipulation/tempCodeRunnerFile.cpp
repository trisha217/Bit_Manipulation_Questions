if (n == 0)
    {
        return 0;
    }
    else
    {
        int x = largestPowOf2(n);
        int bitsUpto2RaiseToX = x * (1 << (x - 1)); // x multiplied by 2 raise to the power of x
        int onesInBitsleft = n - (1 << x) + 1;
        int rest = n - (1 << x);
        int result = bitsUpto2RaiseToX + onesInBitsleft + solve(rest);
        return result;
    }