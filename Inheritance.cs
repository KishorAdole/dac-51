using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("manager");
            Manager m1 = new Manager("Teju", 1, 70000, "HR");
            Console.WriteLine("name " + m1.Name);
            Console.WriteLine("net salary == " + m1.CalcNetSalary());
            Console.WriteLine("===========================================");
            Console.WriteLine("general manager");
            GeneralManager gm1 = new GeneralManager("mahesh", 1, 100000, "GM", "abccc");
            Console.WriteLine("name " + gm1.Name);
            Console.WriteLine("net salary == " + gm1.CalcNetSalary());
            Console.WriteLine("===========================================");
            Console.WriteLine("CEO");
            CEO c1 = new CEO("yamini", 4, 60000);
            Console.WriteLine("name " + c1.Name);
            Console.WriteLine("net salary == " + c1.CalcNetSalary());
            Console.WriteLine("===========================================");
            Console.ReadLine();
        }
    }



    abstract public  class Employee
    {
        private string name;
        private int empno;
        private short deptno;
        protected decimal basic;
        static int counter;

        public Employee(string name,short deptno,decimal basic)
        {
            this.Name = name;
            this.DeptNo = deptno;
            this.Basic = basic;
            this.EmpNo = counter++;

        }
        public string Name
        {
            get
            {
                return name;
            }
            set
            {
                if (name != " ")
                {
                    name = value;
                }
                else
                {
                    Console.WriteLine("please enter valid name");
                }
            }
        }

        abstract public decimal Basic
        {
          get ;
          set;
         
        }


        public short DeptNo
        {
            get
            {
                return deptno;
            }
            set
            {
                if (value > 0)
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

        public abstract decimal CalcNetSalary();

    }

    public class Manager : Employee
    {
        private string designation;

        public Manager(string name="msm", short deptno=1, decimal basic=4555,string designation="boss"):base(name,deptno,basic)
        {
            this.Designation = designation;
        }
        public string Designation
        {
            get
            {
                return designation;
            }


            set
            {
                if(value!=" ")
                {
                    designation = value;
                }
                else
                {
                    Console.WriteLine("enter valid desig");
                }
            }
        }
        public override decimal Basic
        {
            get { return basic; }
            set
            {
                if (value > 0)
                {
                    basic = value;
                }
                else
                {
                    Console.WriteLine("enter valid basic");
                }
            }

        }
        public override decimal CalcNetSalary()
        {
            return basic + 100;
        }
    }

    public class GeneralManager : Manager
    {
        private string perk;

        public GeneralManager(string name = "msm", short deptno = 1, decimal basic = 4555, string designation="boss",string perk="xyz"):base( name, deptno,basic,designation)
        {
            this.Perk = perk;
        }
        public string Perk
        {
            get
            {
                return perk;

            }
            set
            {
                if (value != " ")
                {
                    perk = value;
                }
                else
                {
                    Console.WriteLine("enter valid perk");
                }

            }
        }

        public override decimal CalcNetSalary()
        {
            return basic + 100;
        }
    }

    public class CEO : Employee
    {
        
        public CEO(string name = "msm", short deptno = 1, decimal basic = 4555 ) : base(name, deptno, basic)
        {
            
        }
        public override decimal Basic
        {
            get { return basic; }
            set
            {
                if (value > 0)
                {
                    basic = value;
                }
                else
                {
                    Console.WriteLine("enter valid basic");
                }
            }
        }

        public override decimal CalcNetSalary()
        {
            return basic + 1000;
        }
    }

}









