#pragma once
#include "ManagedObject.h"
#include "../Core/Worker.h"

namespace CLI
{
    public ref class Worker : public ManagedObject<Core::Worker>
    {
    public:
        Worker(System::String^ name, float salary);
        void raiseSalary(float amount);
        property float Salary
        {
        public:
            float get()
            {
                return m_Instance->GetSalary();
            }
        private:
            void set(float value)
            {
            }
        }
        property System::String^ Name
        {
        public:
            System::String^ get()
            {
                return char_array_to_string(m_Instance->m_Name);
            }
        private:
            void set(System::String^ name)
            {
            }
        }
    };
}
