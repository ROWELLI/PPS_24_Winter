using System;

namespace PPS{
    public class A080{
        static void Main(){
            ThirdBiggestNumber();
        }
        public static void ThirdBiggestNumber_0(){
            int.TryParse(Console.ReadLine(), out int count);

            for(int i=0;i<count;i++){
                var input = Console.ReadLine();
                if(input!=null){
                    List<int> numList = input.Split(' ').Select(int.Parse).ToList();
                    numList.Sort();
                    Console.WriteLine(numList[numList.Count -3]);
                }
            }
        } 

        public static void ThirdBiggestNumber_StreamReader(){

            using(StreamReader reader = new StreamReader("A080_input.txt")){
                Console.SetIn(reader);
            
                var temp = Console.ReadLine();
                int.TryParse(temp, out int count);

                for(int i=0;i<count;i++){
                    var input = Console.ReadLine();
                    if(input!=null){
                        int[] numArray = input.Split(' ').Select(int.Parse).OrderByDescending(num=>num).ToArray();
                        Console.WriteLine(numArray[2]);
                    }
                }
            }
        } 

        public static void ThirdBiggestNumber(){
            var temp = Console.ReadLine();
            int.TryParse(temp, out int count);

            for(int i=0;i<count;i++){
                var input = Console.ReadLine();
                if(input!=null){
                    int[] numArray = input.Split(' ').Select(int.Parse).OrderByDescending(num=>num).ToArray();
                    Console.WriteLine(numArray[2]);
                }
            }
        } 
    }
}