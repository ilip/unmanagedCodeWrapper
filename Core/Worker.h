#pragma once
namespace Core
{
    class Worker
    {
    public:
        const char* m_Name;
    private:
        float m_Salary;
    public:
        Worker(const char* name, float salary);

        void raiseSalary(float amount);
        inline float GetSalary() const { return m_Salary; };
    };
}