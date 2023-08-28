#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include <cstdlib>
#include <vector>

#include <SFML/Graphics.hpp>
#include <memory>
#include <iterator>

using namespace sf;
using namespace std;

const int BoardSize = 11;
const int CircleSize = 30;
const int FontSize = 100;

const int X_TextAdd = 650;
const int Y_TextAdd = 100;

const int X_CircleDistance = 75;
const int Y_CircleDistance = 70;
const int CircleLeftOddDistance = 70;
const int CircleLeftEvenDistance = 35;

const int dRow[] = {-1, -1, 0, 0, 1, 1};
const int dCol[] = {0, 1, -1, 1, 0, 1};
const int amountOfDir = 6;

using BoardVector = std::vector<std::vector<CircleShape>>;
