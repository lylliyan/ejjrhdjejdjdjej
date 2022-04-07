#include"Actor.h"
#include"Film.h"
#include<iostream>
#include<string>
float score;
Film::Film(string s, string n1, float p1, float p2, string n2, float p3, float p4)
{
	name = s;
	a1.name = n1;
	a2.name = n2;
	score = a1.Popularity(p1,p2,p3,p4);
}
float Film::Popularity_index()
{
	return score;
}