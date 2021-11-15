#pragma once

#include<iostream>
#include<string>
#include<time.h>
#include<vector>
#include<algorithm>

using namespace std;
int num_flag = 0;
vector<int> numlist;
void random_generator(int min, int max)
{
	for (int i = min; i < max + 1; i++)
	{
		numlist.push_back(i);
	}
	random_shuffle(numlist.begin(), numlist.end());
}

class student
{
public:
	int num;
	string name;
	int birthday_month;
	int birthday_day;
	int birthday_year = 2001;

	int chinese_grades;
	int math_grades;
	int average_grade;

	student() {
		srand((int)time(0));
		cin >> chinese_grades >> math_grades; 
		count_average();
		num_flag++;
		num = num_flag;
		birthday_month = (rand() % 12 + 1);
		birthday_day = (rand() % 28 + 1);
		name = namelist[*(numlist.end() - 1)];
		numlist.pop_back();
		//num = num_flag++;
	};
	void output()
	{
		cout << "-----------------------------------------------------------" << endl;
		cout << "num: " << num << endl;
		cout << "name: " << name << endl;
		cout << "birthday: " << birthday_year << ' ' << birthday_month << ' ' << birthday_day << ' ' << endl;
		cout << "chinese: " << chinese_grades << endl;
		cout << "math: " << math_grades << endl;
		cout << "average: " << average_grade << endl;
		cout << "-----------------------------------------------------------" << endl;
	}
	void count_average() {
		average_grade = (chinese_grades + math_grades / 2);
	};
private:
	string namelist[20] = {"tom","gimy","timmy","Noob","wtf","John Wick","Pusy","asse","bad_Guy","witch","ybb", "nani7mi","¼ÎÈ»Ð¡½ã³Ôµç»¡ÐÇ","MDY_kassa","T1 Faker","haimili","big_smoke","asshole","aa"};
};

