//
//  circle.cpp
//  Oving3
//
//  Created by Ian Evangelista on 31/08/2020.
//  Copyright © 2020 Ian Evangelista. All rights reserved.
//

#include <iostream>
#include "circle.hpp"

using namespace std;

int main()
{
    Circle circle(5);
    double area = circle.get_area();
    cout << "Arealet er lik " << area << endl;

    double circumference = circle.get_circumference();
    cout << "Omkretsen er lik " << circumference << endl;
}
