
namespace PPS
{

    public class A107
    {

        public static void EasySolvingProblem()
        {
            int[] input = (Console.ReadLine()?? throw new ArgumentNullException("No")).Split(' ').Select(int.Parse).ToArray();
            int counter=1;
            int result = 0;
            int level=1;
            int temp = 1;
            while(counter <= input[1]){
                if(counter >=input[0] && counter <=input[1]){
                    result +=level;
                }
                if(temp++==level){
                    level++;
                    temp=1;
                }
                counter++;
            }
            Console.WriteLine(result);
        }
    }
}