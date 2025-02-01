
namespace PPS
{

    public class A105
    {

        public static void DiagonalPartition()
        {
            StreamWriter result = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader input = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            int num = int.Parse(input.ReadLine() ?? throw new ArgumentNullException("No"));
            int i = 1;
            while(num>i){
                num -= i;
                i++;
            }
            if(i%2 == 1){
                result.WriteLine($"{i+1-num}/{num}");
            }
            else{
                result.WriteLine($"{num}/{i+1-num}");
            }
            result.Close();
            input.Close();
        }


    }
}