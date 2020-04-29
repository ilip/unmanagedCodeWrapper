#include "Worker.h"
using namespace System;

namespace CLI
{
    Worker::Worker(System::String^ name, float salary) : ManagedObject<Core::Worker>(new Core::Worker(string_to_char_array(name), salary))
    {
    }

    void Worker::raiseSalary(float amount)
    {
        m_Instance->raiseSalary(amount);
    }

}