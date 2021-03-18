using System;
using System.Collections;
using static System.Console;

namespace UsingQueue {
    class MainApp {
        static void Main(string[] args) {
            Queue que = new Queue();
            que.Enqueue(1);
            que.Enqueue(2);
            que.Enqueue(3);
            que.Enqueue(4);
            que.Enqueue(5);

            while(que.Count > 0) WriteLine(que.Dequeue());
            //que의 데이터를 순차적으로 출력하고 삭제하라.
        }
    }
}