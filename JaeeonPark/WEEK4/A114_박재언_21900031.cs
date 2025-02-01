namespace PPS
{
    public class A114
    {
        public static bool IsPrime(int n)
        {
            if (n == 1)
                return false;

            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    return false;
                }
            }
            return true;
        }

        public int NumPrimeArrangements(int n)
        {
            const long MOD = 1000000007;
            int count = 0;
            for (int i = 1; i <= n; i++)
            {
                if (IsPrime(i))
                    count++;
            }

            long perm = 1;

            for (int i = 1; i <= count; ++i)
            {
                perm = (perm * i) % MOD;
            }

            for (int i = 1; i <= n - count; ++i)
            {
                perm = (perm * i) % MOD;
            }

            return (int)perm;
        }
    }
}