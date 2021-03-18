using System;
using System.Collections.Generic;

namespace ExpressionBodiedMember {
    class FriendList {
        private List<string> list = new List<string>();

        public void Add(string name) => list.Add(name);             //Method
        public void Remove(string name) => list.Remove(name);       //Method
        public void PrintAll() {
            foreach(var s in list)
                Console.WriteLine(s);
        } 
        //public void PrintAll()의 경우 Expression이 2줄로 표현되기때문에 ExpressionBodiedMember가 적용되지 않는다.
        //public void PrintA() => Console.WriteLine(name);

        public FriendList() => Console.WriteLine("FriendList()");   //Constructor
        ~FriendList() => Console.WriteLine("~FriendList()");        //Destroior?소멸자

        //public int Capacity => list.Capacity;
        public int Capacity {
            get => list.Capacity;
            set => list.Capacity = value;
        }

        //public string this[int index] => list[index];             //읽기전용
        public string this[int index] {
            get => list[index];
            set => list[index] = value;
        }
    }
    
    class MainApp {
        static void Main(string[] args) {
            FriendList obj = new FriendList();
            obj.Add("Eeny");
            obj.Add("Meeny");
            obj.Add("Miny");
            obj.Remove("Eeny");
            obj.PrintAll();

            Console.WriteLine($"{obj.Capacity}");
            obj.Capacity = 10;
            Console.WriteLine($"{obj.Capacity}");

            Console.WriteLine($"{obj[0]}");
            obj[0] = "Moe";
            obj.PrintAll();
        }
    }
}