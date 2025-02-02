
namespace PPS
{

    public class A110
    {

        public static void Remainder()
        {
            int remainder = 1000 - int.Parse(Console.ReadLine() ?? throw new ArgumentNullException("No"));
            int result = 0;
            int[] changes = {500,100,50,10,5,1};
            int changeIndex = 0;
            while(remainder > 0){
                if(remainder>=changes[changeIndex]){
                    remainder-= changes[changeIndex];
                    result++;
                }
                else{
                    changeIndex++;
                }
            }
            Console.WriteLine(result);
        }

        
    }
}