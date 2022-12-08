#include<iostream>
using namespace std;

/*
Enter the data for employee in struct using udf
empno,empnm,basicsalary
da =20% 0f basic
hra =20% of basic
med =1000 rs
pf=25% of basic
loan= 8% of basic;
cal gross sal and netslaray and display salary slip
*/
struct employee
{
    char nm[25];
    int no;
    int basic;
    int gross;
    int net;

};

typedef struct employee emp;
emp getdata(emp);

int main()
{
    emp e;
    e=getdata(e);
    
    cout<<endl<<"Salary slip of Employee"<<endl;

    cout<<endl<<"Employee name is"<<e.nm;
    cout<<endl<<"Employee number is"<<e.no;
    cout<<endl<<"Basic salary is"<<e.basic;
    cout<<endl<<"Gross salary is"<<e.gross;
    cout<<endl<<"Net salary is"<<e.net;

    return 0;

}

emp getdata (emp e1)
{
    int da, hra, pf, med, loan;

    cout<<endl<<"Enter name of employee";
    cin>>e1.nm;

    cout<<endl<<"Enter number of employee";
    cin>>e1.no;
    fflush(stdin);

    cout<<endl<<"Enter basic salary";
    cin>>e1.basic;

    da=0.2*(e1.basic);
    hra=0.2*(e1.basic);
    med= 1000;
    pf=0.25*(e1.basic);
    loan=0.08*(e1.basic);

    e1.gross=(e1.basic+da+hra+med);
    e1.net=(e1.gross-pf-loan);

    return e1;
}