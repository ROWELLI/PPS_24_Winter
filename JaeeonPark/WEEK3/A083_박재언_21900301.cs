
namespace PPS{
    public class A083{
        public static void OrderNoDup(){
            StreamReader input = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            input.ReadLine();
            result.WriteLine(string.Join(" ",(input.ReadLine()??throw new ArgumentNullException("Input cannot be null.")).Split().Distinct().OrderBy(int.Parse)));

            input.Close();
            result.Close();
        }
    }
}