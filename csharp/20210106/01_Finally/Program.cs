using System;
using static System.Console;
using System.Collections;
using System.Collections.Generic;

namespace Finally {
    class MyList<T> : IEnumerator<T>, IEnumerable<T> {
        private T[] array;
        int position = -1;
        //constructor
        public MyList(int num) {
            array = new T[num];
        }
        //array index
        public T this[int index] {
            get { return array[index]; }
            set {
                if(index >= array.Length) {
                    Array.Resize<T>(ref array, index + 1);
                    WriteLine($"Array Reseized: {array.Length}");
                }
                array[index] = value;
            }
        }
        //indexer Length property
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
        public bool MoveNext() {
            if(position == array.Length-1) {
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
        public T Current {
            get { return array[position]; }
        }
        object IEnumerator.Current {
            get { return array[position]; }
        }
    }

    class MainApp {
        static int Divide(int divisor, int dividend) {
            try {
                WriteLine("Divide() Start!");
                return divisor / dividend;
            }
            catch(DivideByZeroException e) {
                WriteLine("Divide() Exception!");
                throw e;
            }
            finally {
                WriteLine("Divide() End.");
            }
        }
        static void Main(string[] args) {
            try {
                Write("Enter Number : ");
                int divisor = Convert.ToInt32(ReadLine());
                Write("Enter Number : ");
                int dividend = Convert.ToInt32(ReadLine());

                WriteLine("{0} / {1} = {2}", divisor, dividend, Divide(divisor, dividend));

                MyList<int> arr = new MyList<int>(2);
                arr[0] = divisor;
                arr[1] = dividend;
                arr[2] = Divide(divisor, dividend);
                foreach(int i in arr) Write($"{i} ");
            }
            catch(FormatException e) {
                WriteLine("Error : " + e.Message);
            }
            catch(DivideByZeroException e) {
                WriteLine("Error : " + e.Message);
            }
            finally {
                WriteLine("Program ended..");
            }
        }
    }
}