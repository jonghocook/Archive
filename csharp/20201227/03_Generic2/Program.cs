using System;
using System.Collections;
using static System.Console;

namespace Generic2 {
    class MyList<T> {
        T[] array;
        public MyList(int n) {
            array = new T[n];
        }
        public T this[int index] {
            get {
                return array[index];
            }
            set {
                if(index >= array.Length) {
                    Array.Resize<T>(ref array, index + 1);
                    WriteLine($"Array Resied : {array.Length}"); 
                }
                array[index] = value;
            }
        }
        public int Length {
            get { return array.Length; }
        }
        public IEnumerator GetEnumerator() {
            for(int i=0; i<array.Length; i++) {
                yield return array[i];
            }
        }
    }
    class MainApp {
        static void Main(string[] args) {
            MyList<int> list = new MyList<int>(3);
            list[0] = 0;
            list[1] = 1;
            list[2] = 2;
            list[3] = 3;
            list[4] = 4;
            list[5] = 5;

            foreach(int i in list) Write($"{i} ");
        }
    }
}