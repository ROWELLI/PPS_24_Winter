namespace PPS
{
    public class A117
    {
        static void Main(){
            Console.WriteLine(DistanceBetweenBusStops([1,2,3,4],0,3));
        }
        public static int DistanceBetweenBusStops(int[] distance, int start, int destination)
        {
            int busStops= distance.Length;
            int cost1=0;
            int cost2=0;
            int frontIndex= start;
            int backIndex = start;
            for(int i=0;i<busStops;i++){
                if(frontIndex!=destination){
                    cost1+=distance[frontIndex];
                    frontIndex = (frontIndex+1)%busStops;
                }

                if(backIndex!=destination){
                    int temp = (backIndex-1+busStops)%busStops;
                    cost2+=distance[temp];
                    backIndex = temp;
                }
            }
            return Math.Min(cost1,cost2);
        }
    }
}