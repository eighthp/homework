/*
                        Задача №2

Создайте класс, описывающий указанный в вашем варианте реальный объект.
Не забывайте про принципы абстракции и инкапсуляции.
Продемонстрируйте использование вашего класса.

=> Прямоугольник, расчет площади, периметра и длины диагонали.
*/
#include <iostream>
#include <cmath>
class Rectangle {
    float m_a;
    float m_b;
public:
    Rectangle() = default;
    Rectangle(float a, float  b)
    {
        setA(a);
        setB(b);
    }
    void setA(float a)
    {
        if (a < 0)
            std::cout << "Negative";
        m_a=a;

    }
    void setB(float b)
    {
        if (b < 0)
            std::cout << "Negative";
        m_b=b;
    }

    float Area()
    {
        return m_a*m_b;
    }

    float Perimeter()
    {
        return (m_a+m_b)*2;
    }

    float Diagonal()
    {
        return sqrt(pow(m_a,2) + pow(m_b,2));
    }
};
int main()
{

    Rectangle r(2,1);
    r.setA(3);
    r.setB(4);
    std::cout << "Area = " << r.Area() << std::endl;
    std::cout << "Perimeter = " << r.Perimeter() << std::endl;
    std::cout << "Diagonal = " << r.Diagonal() << std::endl;

    return 0;
}