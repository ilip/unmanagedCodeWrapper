#include "Worker.h"
#include <iostream>

namespace Core
{
    Worker::Worker(const char* name, float salary)
        : m_Name(name), m_Salary(salary)
    {
        std::cout << "Successfully created Worker object!" << std::endl;
    }

    void Worker::raiseSalary(float amount)
    {
        m_Salary *= amount;
        std::cout << "Raised salary of Worker " << m_Name << " to " << m_Salary << std::endl;
    }
}
