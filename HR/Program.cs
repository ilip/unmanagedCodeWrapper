using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CLI;

namespace HR
{
    class Program
    {
        static void Main(string[] args)
        {
            Worker daniel = new Worker("Daniel Szabo", 100000);
            Console.WriteLine($"The workder: {daniel.Name} Salary before the raise is : {daniel.Salary}");
            daniel.raiseSalary(1.1f);
            Console.WriteLine($"The workder: {daniel.Name} Salary after the raise is : {daniel.Salary}");

            Console.Read();
        }
    }
}
