
namespace PPS
{
    public class A087
    {
     

        public static int MaximumUnitsinTruck(int[][] boxTypes, int truckSize)
        {
            int answer = 0;

            Array.Sort(boxTypes, (a, b) => b[1] - a[1]);
            foreach (var box in boxTypes)
            {
                int count = Math.Min(box[0], truckSize);
                answer += box[1] * count;
                truckSize -= count;
                if (truckSize == 0)
                    break;
            }
            return answer;
        }

    }
}