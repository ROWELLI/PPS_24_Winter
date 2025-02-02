namespace PPS
{
    public class A113
    {
        static List<int>[] list = null!;

        static bool[] visitedArray = null!;
        static int N, M;

        public static void DFS(int index)
        {
            visitedArray[index] = true;
            foreach (int node in list[index])
            {
                if (visitedArray[node]) continue;
                DFS(node);
            }
        }

        public static void ConnectedComponents()
        {
            int[] inputs = (Console.ReadLine() ?? throw new ArgumentNullException("No")).Split(' ').Select(int.Parse).ToArray();
            N = inputs[0];
            M = inputs[1];
            list = new List<int>[N + 1];
            for (int i = 1; i <= N; i++)
            {
                list[i] = new List<int>();
            }

            for (int i = 0; i < M; i++)
            {
                inputs = (Console.ReadLine() ?? throw new ArgumentNullException("No")).Split(' ').Select(int.Parse).ToArray();
                int S = inputs[0];
                int E = inputs[1];
                list[S].Add(E);
                list[E].Add(S);
            }

            int count=0;
            visitedArray = new bool[N+1];

            for(int i=1;i<=N;i++){
                if(visitedArray[i]) continue;
                DFS(i);
                count++;
            }

            Console.WriteLine(count);
        }
    }
}