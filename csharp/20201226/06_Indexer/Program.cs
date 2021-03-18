//인덱서를 이용하면 Array함수를 통해 값을 입력받는 것 외에 배열처럼 인덱스값을 이용해서 바로 값을 입력할 수 있구나..
using System;
using System.Collections;

namespace Indexer {
    class MyList {
        private int[] array;
        public MyList() {
            array = new int[3];
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
        public int Length {
            get { return array.Length; }
        }
    }
    class MainApp {
        static void Main(string[] args) {
            MyList list = new MyList();
            for(int i=0; i<5; i++) list[i] = i;

            for(int i=0; i<list.Length; i++) Console.WriteLine(list[i]);
        }
    }
}