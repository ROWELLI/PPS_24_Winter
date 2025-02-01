namespace PPS
{
    public class A120
    {
        public char FindTheDifference(string s, string t)
        {
            int s_val = s.Sum(c=>(int)c);
            int t_val = t.Sum(c=>(int)c);
            int diff = t_val - s_val;
            return (char)diff;
        }

    }
}