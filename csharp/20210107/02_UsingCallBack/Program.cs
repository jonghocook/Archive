using System;
using System.Collections;
using System.Collections.Generic;

namespace UsingCallBack {
    delegate int Compare(int a, int b);
    class MyList<T> : IEnumerator<T>, IEnumerable<T> {
        private T[] arr;
        int position = -1;
        public MyList(int a) {
            arr = new T[a];
        }
        public T this[int index] {
            get { 
                return arr[index];
            }
            set {
                if(index >= arr.Length) {
                    Array.Resize<T>(ref arr, index + 1);
                }
                arr[index] = value;
            }
        }
        public int Length {
            get { return arr.Length; }
        }
        public IEnumerator<T> GetEnumerator() {
            for(int i=0; i<arr.Length; i++) {
                yield return (arr[i]);
            }
        }
        IEnumerator IEnumerable.GetEnumerator() {
            for(int i=0; i<arr.Length; i++) {
                yield return (arr[i]);
            }
        }
        public T Current {
            get { return arr[position]; }
        }
        object IEnumerator.Current {
            get { return arr[position]; }
        }
        public bool MoveNext() {
            if(position > arr.Length - 1) {
                Reset();
                return false;
            }
            position++;
            return (position < arr.Length);
        }
        public void Reset() {
            position = -1;
        }
        public void Dispose() {

        }
    }
    class MainApp {
        static int AscendCompare(int a, int b) {
            if(a > b) return 1;
            else if(a == b) return 0;
            else return -1;
        }

        static int DesendCompare(int a, int b) {
            if(a < b) return 1;
            else if(a ==b) return 0;
            else return -1;
        }

        static void BubbleSort(int[] DataSet, Compare Comparer) {
            int temp = 0;

            for(int i=0; i<DataSet.Length - 1; i++) {
                for(int j=0; j<DataSet.Length - (i + 1); j++) {
                    if(Comparer(DataSet[j], DataSet[j+1]) > 0) {
                        temp = DataSet[j+1];
                        DataSet[j+1] = DataSet[j];
                        DataSet[j] = temp;
                    }
                }
            }
        }

        static void Main(string[] args) {
            int[] array = {3, 7, 4, 2, 10};

            Console.WriteLine("Sorting ascending...");
            BubbleSort(array, new Compare(AscendCompare));

            MyList<int> mlist = new MyList<int>(array.Length);
            for(int i=0; i<array.Length; i++) {
                mlist[i] = array[i];
            }
            foreach(int i in mlist) Console.Write($"{i} ");

            int[] array2 = {7, 2, 8, 10, 11};
            Console.WriteLine("\nSorting Descending...");
            BubbleSort(array2, new Compare(DesendCompare));

            for(int i=0; i<array2.Length; i++) {
                Console.Write($"{array2[i]} ");
            }
        }
    }
}