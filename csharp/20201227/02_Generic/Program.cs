using System;
using System.Collections;
using static System.Console;

namespace Generic {
    class MyList<T> {
        private T[] array;
        public MyList() {
            array = new T[3];
        }
        public T this[int index] {
            get {
                return array[index];
            }
            set {
                if(index >= array.Length) {
                    Array.Resize<T>(ref array, index + 1);
                    WriteLine($"Array Resized : {array.Length}");
                }
                array[index] = value;
            }
        }
        public int Length {
            get { return array.Length; }
        }
        public IEnumerator GetEnumerator() {
            for(int i=0; i<array.Length; i++) {
                yield return (array[i]);
            }
        }
    }
    class MainApp {
        static void Main(string[] args) {
            MyList<string> strList = new MyList<string>();
            strList[0] = "abc";
            strList[1] = "def";
            strList[2] = "ghi";
            strList[3] = "jkl";
            strList[4] = "mno";

            foreach(string s in strList) Write($"{s} ");
            //for(int i=0; i<strList.Length; i++) Write($"{strList[i]} ");
            WriteLine();
        }
    }
}