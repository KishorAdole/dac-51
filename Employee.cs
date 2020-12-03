using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Employee
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee o1 = new Employee("Amol", 1234, 10);
            Employee o2 = new Employee("Amol", 1234);
            Employee o3 = new Employee("Amol");
            Employee o4 = new Employee();
            //Employee o1 = new Employee()
            //Employee o2 = new Employee()
            //Employee o3 = new Employee()
            Console.WriteLine(o1.EmpNo);
            Console.WriteLine(o2.EmpNo);
            Console.WriteLine(o3.EmpNo);

            Console.WriteLine(o3.EmpNo);
            Console.WriteLine(o2.EmpNo);
            Console.WriteLine(o1.EmpNo);
            Console.WriteLine(o1.GetSalary());
            Console.ReadLine();
        }
    }


    class Employee
    {
        private  string name;
        private int empno;
        private decimal basic;
        private short deptno;
        static int counter;
        public string Name
        {
            get 
            {
                return name;
            }
            set
            { 
                if(name!=" ")
                {
                    name = value;
                }
                else
                {
                    Console.WriteLine("please enter valid name");
                }
            }
        }

        public decimal Basic
        {
            get
            {
                return basic;
            }
            set
            {
                if(value>1000 && value < 50000)
                {
                    basic = value;
                }
                else
                {
                    Console.WriteLine("enter valid basic");
                }
               
            }
        }


        public short DeptNo
        {
            get
            {
                return deptno;
            }
            set
            {
                if (value > 0 )
                {
                    deptno = value;
                }
                else
                {
                    Console.WriteLine("enter valid dept");
                }
            }

          
        }

        public int EmpNo
        {
            get 
            {
                return empno; 
            }
             private set //property acceess spcifier and read only
            {
                empno = ++counter;
            }
        }

        public Employee(string name="mane",decimal basic=1235,short deptno=3)
        {
            this.Name = name;
            this.DeptNo = deptno;
            this.Basic = basic;
            this.EmpNo = empno;
            Console.WriteLine(Name);
            Console.WriteLine(EmpNo);
            Console.WriteLine(DeptNo); 
            Console.WriteLine(Basic);
        }

        public decimal GetSalary()
        {
            decimal ta = 1000;
            decimal da = 500;
            return Basic + ta + da;
        }
    }

}
   



