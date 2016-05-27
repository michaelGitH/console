// Рис. 9.2: Time.cpp
// Определение элемент-функций класса Time.
#include <iostream>
using std::cout;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h" // включить определение класса Time из Time.h

// Конструктор Time инициализирует каждый элемент данных нулем.
// Гарантирует, что объекты создаются в согласованном состоянии.
Time::Time( int hr, int min, int sec )
{
	setTime( hr, min, sec ); // проверить и установить время
} // конец конструктора Time

// установить значение времени (во всемирном формате); убедиться,
// что данные согласованы: недействительные элементы обнуляются
void Time::setTime( int h, int m, int s )
{
	setHour( h ); 
	setMinute( m ); 
	setSecond( s ); 
} // конец функции setTime

// установить значение часов
void Time::setHour( int h )
{
	hour = ( h >= 0 && h < 24 ) ? h : 0; // проверить часы
} // конец функции setHour

// установить значение минут
void Time::setMinute( int m )
{
	minute = ( m >= 0 && m < 60 ) ? m : 0; // проверить минуты
} // конец функции setMinute

void Time::setSecond( int s )
{
	second = ( s >= 0 && s < 60 ) ? s : 0; // проверить секунды
} // конец функции setMinute

// возвратить значение часов
int Time::getHour()
{
	return hour;
} // конец функции getHour
// возвратить значение минут
int Time::getMinute()
{
	return minute;
} // конец функции getMinute
// возвратить значение секунд
int Time::getSecond()
{
	return second;
} // конец функции getSecond

// Напечатать в формате всемирного времени (HH:MM:SS)
void Time::printUniversal()
{
	cout << setfill( '0' ) << setw( 2 ) << hour << ":"
	<< setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // конец функции printUniversal

// Напечатать в стандартном формате времени (HH:MM:SS AM или РМ)
void Time::printStandard()
{
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":"
	<< setfill( '0' ) << setw( 2 ) << getMinute() << ":" << setw( 2 )
	<< getSecond() << ( hour < 12 ? " AM" : " PM" );
} // конец функции printstandard
