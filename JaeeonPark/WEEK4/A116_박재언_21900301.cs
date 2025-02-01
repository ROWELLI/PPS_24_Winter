namespace PPS
{
    public class A116
    {
        static string[] arr = {"Thursday", "Friday",  "Saturday", "Sunday", "Monday",   "Tuesday", "Wednesday"};

        public static bool IsLeapYear(int year){
            return (year %4 == 0) && (year%100 !=0 || year%400 == 0);
        }
        public string DayOfTheWeek(int day, int month, int year)
        {
            for (int i = 1971; i < year; i++)
            {
                if (IsLeapYear(i))
                    day += 366;
                else
                    day += 365;
            }

            for (int i = 1; i < month; i++)
            {
                if (i == 2)
                    if (IsLeapYear(year))
                        day += 29;
                    else
                        day += 28;
                else if (i == 4 || i == 6 || i == 9 || i == 11)
                    day += 30;
                else
                    day += 31;
            }
          
            return arr[day%7];
        }
    }
}