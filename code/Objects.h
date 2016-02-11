#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <memory>
#include <map>

using namespace std;

struct Product
{
	int id;
	int weight;
};

struct Position
{
	int x;
	int y;
};

struct WareHouse
{
	Position position;
	map<int, int> availableProducts;

};

enum Status
{
    UNPROCESSED,
    INDELIVERING,
    COMPLETED
};

struct Order
{
    Status status;
	Position deliverPosition;
	map<int, int> purchasedProducts;
};

struct Drone
{
    Drone(Position p)
    {
        load = 0;
        position.x = p.x;
        position.y = p.y;
    }
    int load;
    Position position;
    map<int, int> goods;
};