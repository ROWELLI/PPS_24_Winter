

namespace PPS
{

    public class A122
    {


        public bool RotateString(string s, string goal)
        {
            if (s.Length != goal.Length)
                return false;
            
            return (s + s).Contains(goal);
        }

    }
}