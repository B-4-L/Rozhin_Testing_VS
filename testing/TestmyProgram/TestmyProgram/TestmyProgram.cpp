#include "pch.h"
#include "CppUnitTest.h"
#include "E:\2 курс\ППО\ППО - 4 ЛБ\Rozhin_Testing_VS\Program\Program\Program.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestmyProgram
{
    TEST_CLASS(TestmyProgram)
    {
    public:

        TEST_METHOD(test_vvesti_chislo)
        {
            // Тестирование функции ввода числа
            int chislo = Vvestichislo();
            Assert::AreEqual(123, chislo);
        }

        TEST_METHOD(test_vvesti_chislo_negative)
        {
            // Тестирование функции ввода числа с отрицательным значением
            int chislo = Vvestichislo();
            Assert::AreEqual(-456, chislo);
        }

        TEST_METHOD(test_vvesti_chislo_zero)
        {
            // Тестирование функции ввода числа равного нулю
            int chislo = Vvestichislo();
            Assert::AreEqual(0, chislo);
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