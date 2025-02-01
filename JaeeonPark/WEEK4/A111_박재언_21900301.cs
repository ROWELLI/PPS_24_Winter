namespace PPS
{
    public class A111
    {
        public static void Bus()
        {
            int count =  int.Parse(Console.ReadLine() ?? throw new ArgumentNullException("No"));
            while(count-- > 0){
                int num =  int.Parse(Console.ReadLine() ?? throw new ArgumentNullException("No"));
                Console.WriteLine(Math.Pow(2,num)-1);
            }
        }
    }
}