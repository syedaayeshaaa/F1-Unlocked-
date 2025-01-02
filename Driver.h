#pragma once
using namespace System;

public ref class Driver
{
private:
    String^ name;
    String^ country;
    String^ team;
    int races;
    int wins;
    int podiums;

public:
    Driver(String^ n, String^ c, String^ t, int r, int w, int p);
    void Display();
};

