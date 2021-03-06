#include "stdafx.h"
#include "gamepiece.h"
#include "gameb.h"
#include <ctype.h>
#include<iostream>
#include <string>   // For standard C++ strings.
#include <sstream>  // For standard string streams.
#include <cstring>  // For C-style string functions
#include <vector>
#include <fstream>
using namespace std;

gp::gp(enum piece_color a, string name, string op)
	: color_(a), name_(name), op_(op) {}
//convert a string of color to a enum type of the color so that we can recognize valid and invalid
//colors
enum piece_color stringtoenum(string v) {
	if(v=="red") return red;
	if (v == "black") return black;
	if (v == "white") return white;
	int i = 0;
	int m = 0;
	int n = v.size();
	while (v[i]) {
		if (isspace(v[i])) m++;
		++i;
	}
	if (m == n) return no_color;
	else return invalid_color;
}