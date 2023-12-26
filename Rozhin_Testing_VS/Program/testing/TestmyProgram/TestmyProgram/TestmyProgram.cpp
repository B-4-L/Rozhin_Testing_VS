#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <string>
#include "E:\2 курс\ППО\ППО - 4 ЛБ\Rozhin_Testing_VS\Program\Program\Program.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestmyProgram
{
    TEST_CLASS(TestmyProgram)
    {
    public:

        TEST_METHOD(Test_Input)
        {
            int expected = 20;
            string s = "20";
            Assert::AreEqual(expected, Vvestichislo(s), L"Incorrect value");
        }

        TEST_METHOD(test_vvesti_chislo_negative)
        {
            int expected = 0; // Значение, которое будет возвращено при ошибке
            string s = "a";
            Assert::AreEqual(expected, Vvestichislo(s), L"Incorrect value");
        }

        TEST_METHOD(test_vvesti_chislo_zero)
        {
            int expected = 0; // Значение, которое будет возвращено при ошибке
            string s = "-12";
            Assert::AreEqual(expected, Vvestichislo(s), L"Incorrect value");
        }

        TEST_METHOD(test_max_cifra)
        {
            // Тестирование функции поиска наибольшей цифры
            int max = Maxchislo(12345);
            Assert::AreEqual(5, max);
        }

        TEST_METHOD(test_min_cifra)
        {
            // Тестирование функции поиска наименьшей цифры
            int min = Minchislo(12345);
            Assert::AreEqual(1, min);
        }

        TEST_METHOD(test_max_cifra_zero)
        {
            // Тестирование функции поиска наибольшей цифры в случае нулевого числа
            int max = Maxchislo(0);
            Assert::AreEqual(0, max);
        }

        TEST_METHOD(test_min_cifra_same_digits)
        {
            // Тестирование функции поиска наименьшей цифры в случае всех одинаковых цифр
            int min = Minchislo(11111);
            Assert::AreEqual(1, min);
        }
    };
}