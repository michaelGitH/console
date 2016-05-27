// Time.h
// Объявление класса Time.
// Элемент-функции определяются в Time.cpp

// предотвратить многократное включение заголовочного файла

#ifndef TIME_H
#define TIME_H

// определение класса Time
class Time
{
public:
	Time( int = 0, int = 0, int = 0 ); // конструктор

	// set-функции
	void setTime( int, int, int ); // установить час, минуту, секунду
	void setHour( int );
	void setMinute( int );
	void setSecond( int );

	// get-функции
	int getHour();
	int getMinute();
	int getSecond();

	void printUniversal(); // напечатать в формате всемирного времени
	void printStandard(); // напечатать в стандартном формате времени
private:
	int hour; // 0 - 23 (24-часовой формат времени)
	int minute; //0-59
	int second; //0-59
}; // конец класса Time

#endif






















