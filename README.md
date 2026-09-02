All-In-One C++ Console Calculator

A menu-driven C++ console application that combines five everyday calculators into a single program. Built as a beginner project to practice switch statements, loops, input validation, and the cmath library.

Features
BMI Calculator – enter weight (kg) and height (m) to get your Body Mass Index, plus a remark and health advice.
Tax Calculator – enter gross earnings (USD) and see a full breakdown of income tax, health insurance, pension, investments, and municipal tax, ending in your net earnings.
Temperature Converter – convert Fahrenheit to Celsius or Celsius to Fahrenheit.
Parking Fee Calculator – enter hours and minutes parked plus vehicle type (truck, car, bike, keke) to calculate the fee.
Naira FX Converter – convert Nigerian Naira (NGN) to 9 other currencies (USD, EUR, GBP, CAD, AED, CNY, GHS, JPY, ZAR, XOF).
How it works

The program shows a main menu and reads the user's choice with a switch statement. Each case runs its own mini-program, with while loops used throughout to reject invalid input (e.g. negative weight, an out-of-range menu choice) and re-prompt the user until they enter something valid.

Built with
C++ (Code::Blocks / MinGW)
Standard library: iostream, cmath, iomanip, cstdlib


This is a learning project — exchange rates in the Naira converter are hardcoded example values, not live rates.

Author
-Michael Tertsua
