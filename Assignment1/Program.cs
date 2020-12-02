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
            Employee1 e = new Employee1();
            e.Name = " ";
            Console.WriteLine(e.Name);
            e.DeptNo = 0;
            Console.WriteLine(e.DeptNo);
            e.Basic = 55555;
            Console.WriteLine(e.Basic);

            Employee1 e1 = new Employee1();
            e1.Name = "maheshmane";
            Console.WriteLine(e1.Name);
            e1.DeptNo = 1;
            Console.WriteLine(e1.DeptNo);
            e1.Basic = 99998;
            Console.WriteLine(e1.Basic);
            Console.WriteLine("net salary"+e1.GetNetSalary());
            Employee1 o1 = new Employee1("Amol", 123465, 10);
            Employee1 o2 = new Employee1("Amol", 123465);
            Employee1 o3 = new Employee1("Amol");
            Employee1 o4 = new Employee1();

            Console.ReadLine();
        }
    }

    class Employee1
    {
        public Employee1()
        {
            empno++;
            Console.WriteLine("EmpNo"+empno);
        }
        public Employee1(string Name,decimal Basic,short DeptNo)
        {
            this.Name = Name;
            this.Basic = Basic;
            this.DeptNo = DeptNo;
            Console.WriteLine(Name + " " + Basic+" "+DeptNo);
        }
        public Employee1(string Name, decimal Basic)
        {
            this.Name = Name;
            this.Basic = Basic;
            Console.WriteLine(Name+" "+Basic);
        }
        public Employee1(string Name)
        {
            this.Name = Name;
            Console.WriteLine(Name);
        }
        #region properties
        private string name;

        public string Name
        {
            set
            {
                if (value != "")
                {
                    name = value;
                }
                else
                {
                    Console.WriteLine("invalid input");
                }
            }
            get
            {
                return name;
            }
        }
        #endregion
        private int empno;

        public int EmpNo
        {
            get
            {
                return EmpNo;
            }
        }

        private decimal basic;

        public decimal Basic
        {
            set
            {
                if(value>10000 && value<99999)
                {
                    basic = value;
             
                }
                else
                {
                    Console.WriteLine("invalid salary");
                }
            }

            get
            {
                return basic;
            }
        }

        private short deptno;
        public short DeptNo
        {
            set
            {
                if (value > 0)
                {
                    deptno = value;

                }
                else
                {
                    Console.WriteLine("invalid department");
                }
            }

            get
            {
                return deptno;
            }
        }

            public decimal GetNetSalary()
            {
              decimal basic = 10000;
              decimal hra = 5000;
              decimal da = 4000;

              decimal netSalary = basic + hra + da;

              return netSalary;

             }
    }
}

   



