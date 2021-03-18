using System;
using System.Collections;
using System.Collections.Generic;

namespace EnumerableGeneric {
    class MyList<T> : IEnumerable<T>, IEnumerator<T> {
        private T[] array;
        private int position = -1;
        public MyList(int num) {
            array = new T[num];
        }
        public T this[int index] {
            get {
                return array[index];
            }
            set {
                if(index >= array.Length) {
                    Array.Resize<T>(ref array, index + 1);
                    Console.WriteLine($"Array Resied : {array.Length}");
                }
                array[index] = value;
            }
        }
        public int Length {
            get { return array.Length; }
        }
        public IEnumerator<T> GetEnumerator() {
            for(int i=0; i<array.Length; i++) {
                yield return (array[i]);
            }
        }
        IEnumerator IEnumerable.GetEnumerator() {
            for(int i=0; i<array.Length; i++) {
                yield return (array[i]);
            }
        }
        public T Current {
            get { return array[position]; }
        }
        object IEnumerator.Current {
            get { return array[position]; }
        }
        public bool MoveNext() {
            if(position == array.Length - 1) {
                Reset();
                return false;
            }
            position++;
            return (position < array.Length);
        }
        public void Reset() {
            position = -1;
        }
        public void Dispose() {

        }
    }

    class MainApp {
        static void Main(string[] args) {
            MyList<string> str_list = new MyList<string>(5);
            str_list[0] = "abc";
            str_list[1] = "def";
            str_list[2] = "ghi";
            str_list[3] = "jkl";
            str_list[4] = "mno";

            foreach(string s in str_list) Console.Write($"{s} ");
            Console.WriteLine();

            MyList<int> intList = new MyList<int>(3);
            intList[0] = 0;
            intList[1] = 1;
            intList[2] = 2;
            intList[3] = 3;
            intList[4] = 4;

            foreach(int i in intList) Console.Write($"{i} ");
        }
    }
}