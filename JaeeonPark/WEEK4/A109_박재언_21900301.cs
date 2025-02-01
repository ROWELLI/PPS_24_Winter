
namespace PPS
{

    public class A109
    {

        public static void Belt()
        {
            int M, d = 0;
            double cur = 1.0;
            M = int.Parse(Console.ReadLine() ?? throw new ArgumentNullException("No input"));

            while (M-- > 0)
            {
                string[] input = Console.ReadLine()?.Split() ?? throw new ArgumentNullException("No input");
                int a = int.Parse(input[0]);
                int b = int.Parse(input[1]);
                int s = int.Parse(input[2]);

                if (s == 1)
                    d = 1 - d;

                cur *= (double)b / a;
            }

            Console.WriteLine($"{d} {(int)cur}");
        }

    }
}