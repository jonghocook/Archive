using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;

namespace GetType {
    class MainApp {
        static void PrintInterfaces(Type type) {
            Console.WriteLine("======== Interface ========");

            Type[] interfaces = type.GetInterfaces();
            foreach(Type i in interfaces) Console.WriteLine($"Name : {i.Name}");
            Console.WriteLine();
        }

        static void PrintFields(Type type) {
            Console.WriteLine("======== Fields ========");

            FieldInfo[] fields = type.GetFields(BindingFlags.NonPublic | BindingFlags.Public | BindingFlags.Static | BindingFlags.Instance);
            foreach(FieldInfo f in fields) {
                String accessLevel = "protected";
                if(f.IsPublic) accessLevel = "public";
                else if(f.IsPrivate) accessLevel = "private";
                Console.WriteLine($"Access : {accessLevel}, Type : {f.FieldType.Name}, Name : {f.Name}");
            }
            Console.WriteLine();
        }

        static void PrintMethods(Type type) {
            Console.WriteLine("======== Methods ========");

            MethodInfo[] methods = type.GetMethods();
            foreach(MethodInfo m in methods) {
                Console.Write($"Type : {m.ReturnType.Name}, Name : {m.Name}, Parameter : ");

                ParameterInfo[] args = m.GetParameters();
                for(int i=0; i<args.Length; i++) {
                    Console.Write(args[i].ParameterType.Name);
                    if(i < args.Length - 1) Console.Write(", ");
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }

        static void PrintProperties(Type type) {
            Console.WriteLine("======== Properties ========");

            PropertyInfo[] properties = type.GetProperties();
            foreach(PropertyInfo p in properties) Console.WriteLine($"Type : {p.PropertyType.Name}, Name : {p.Name}");
            Console.WriteLine();
        }

        static void Main(string[] args) {
            int a = 0;
            Type type = a.GetType();

            PrintInterfaces(type);
            PrintFields(type);
            PrintProperties(type);
            PrintMethods(type);
        }
    }
}