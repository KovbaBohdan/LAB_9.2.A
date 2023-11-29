#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_9.2.A/LAB_9.2.A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(StudentTests)
    {
    public:

        TEST_METHOD(TestStudentSorting)
        {
            const int N = 3; 
            Student students[N];

            students[0] = { "������", 10, 80, 90, 3, �� }; 
            students[1] = { "������", 60, 70, 80, 2, �� }; 
            students[2] = { "�������", 50, 60, 70, 1, в }; 

            Sort(students, N);

            Assert::IsTrue(students[0].prizv == "������"); 
            Assert::IsTrue(students[1].prizv == "������");
            Assert::IsTrue(students[2].prizv == "�������"); 
        }
    };
}

