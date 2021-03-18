using System;
using System.Linq;

namespace _03_MinMaxAvg
{
    class Profile
    {
        public string Name { get; set; }
        public int Height { get; set; }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Profile[] arrProfile = {
                new Profile() { Name = "정우성", Height = 186 },
                new Profile() { Name = "김태희", Height = 158 },
                new Profile() { Name = "고현정", Height = 172 },
                new Profile() { Name = "이문세", Height = 178 },
                new Profile() { Name = "하하", Height = 171 }
            };

            var heightStat = from pro in arrProfile
                            group pro by pro.Height < 175 into _g
                            select new
                            {
                                Group = _g.Key == true? "175미만" : "175이상",
                                Count = _g.Count(),
                                Max   = _g.Max(pro => pro.Height),
                                Min   = _g.Min(pro => pro.Height),
                                Average = _g.Average(pro => pro.Height)
                            };
            
            foreach(var stat in heightStat)
            {
                Console.Write("{0} - Count : {1}, Max : {2}, ", stat.Group, stat.Count, stat.Max);
                Console.Write("Min : {0}, Average : {1}  | ", stat.Min, stat.Average);
            }
        }
    }
}
