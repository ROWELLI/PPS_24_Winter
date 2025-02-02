namespace PPS
{
    public class A112
    {
        public static void GuitarCode()
        {
            int[] inputs = (Console.ReadLine() ?? throw new ArgumentNullException("No")).Split(' ').Select(int.Parse).ToArray();
            int n = inputs[0], m = inputs[1];

            int minPackagePrice = int.MaxValue;
            int minSinglePrice = int.MaxValue;

            while (m-- > 0)
            {
                int[] temp = (Console.ReadLine() ?? throw new ArgumentNullException("No")).Split(' ').Select(int.Parse).ToArray();
                int packagePrice = temp[0];
                int singlePrice = temp[1];

                minPackagePrice = Math.Min(minPackagePrice, packagePrice);
                minSinglePrice = Math.Min(minSinglePrice, singlePrice);
            }

            int cost1 = (n / 6) * minPackagePrice + (n % 6) * minSinglePrice; // Mixed
            int cost2 = (n / 6 + 1) * minPackagePrice; // Only packages
            int cost3 = n * minSinglePrice; // Only singles

            Console.WriteLine(Math.Min(cost1, Math.Min(cost2, cost3)));
        }
    }
}