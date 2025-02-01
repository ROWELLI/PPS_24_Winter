
namespace PPS
{

    public class A104
    {

        public static void ShortestPath()
        {
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader input = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            string nop = input.ReadLine() ?? throw new ArgumentNullException("No");
            int max=0;
            int total = 0;
            string[] numbers = input.ReadLine()?.Split() ?? throw new ArgumentNullException("No");
            for (int i = 0; i < numbers.Length; i++)
            {
                int number = int.Parse(numbers[i]);
                max = Math.Max(max, number);
                total+=number;
            }
            total-=max;
            result.WriteLine(total);
            result.Close();
            input.Close();
        }




    }
}