using System;
using System.Collections;
using static System.Console;

namespace Enumerable {
    class MyList : IEnumerable, IEnumerator {
        private int[] array;
        int position = -1;
        public MyList(int num) {
            array = new int[num];
        }
        public int this[int index] {
            get {
                return array[index];
            }
            set {
                if(index >= array.Length) {
                    Array.Resize<int>(ref array, index + 1);
                    Console.WriteLine($"Array Resized : {array.Length}");
                }
                array[index] = value;
            }
        }
        //IEnumerator Member
        public object Current {
            get {
                return array[position];
            }
        }
        //IEnumerator Member                                     
        public bool MoveNext() {
            if(position == array.Length - 1) {
                ResetColor();
                return false;
            }
            position++;
            return (position < array.Length);
        }
        //IEnumerator Member
        public void Reset() {
            position = -1;
        }
        //IEnumerable Member
        public IEnumerator GetEnumerator() {
            for(int i=0; i<array.Length; i++) yield return (array[i]);
        }
    }
    class MainApp {
        static void Main(string[] args) {
            MyList list = new MyList(2);
            for(int i=0; i<5; i++) list[i] = i;

            foreach(int e in list) Write($"{e} | ");
        }
    }
}