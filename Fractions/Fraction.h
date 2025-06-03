#pragma once
#include <iostream>
//allows me to handle exceptions 
#include <stdexcept>

#include <numeric>
using namespace std;

namespace mathlib
{
	template <typename T = int>
	class Fraction {
	private:
		T numerator;
		T denominator;

		void simplify()
		{
			//finds greatest common divisor
			T divisor = gcd(numerator, denominator);
			numerator /= divisor;
			denominator /= divisor;

			//makes sure denominator is positive unless but numbers are negative
			if (denominator < 0)
			{
				numerator = -numerator;
				denominator = -denominator;
			}

		}

	public:
		//Fraction constructor
		Fraction(T num = 0, T denom = 1) : numerator(num), denominator(denom) {
			if (denominator == 0)
				throw invalid_argument("Denominator cant be zero.");
			simplify();
		}

		T getNumerator() const { return numerator; }
		T getDenominator() const { return denominator; }

		double toDouble() const
		{
			return static_cast<double>(numerator) / denominator;
		}

		//ARITHMETIC OPERATORS

		Fraction operator+(const Fraction& other) const {
			return Fraction(numerator * other.denominator + other.numerator * denominator,
				denominator * other.denominator);
		}

		Fraction operator-(const Fraction& other) const {
			return Fraction(numerator * other.denominator - other.numerator * denominator,
				denominator * other.denominator);
		}

		Fraction operator*(const Fraction& other) const {
			return Fraction(numerator * other.numerator, denominator * other.denominator);
		}

		Fraction operator/(const Fraction& other) const {
			if (other.numerator == 0)
				throw domain_error("cant divide by zero");
			return Fraction(numerator * other.denominator, denominator * other.numerator);
		}

		// COMPARISON OPERATORS
		bool operator==(const Fraction& other) const {
			return numerator == other.numerator && denominator == other.denominator;
		}

		bool operator!=(const Fraction& other) const {
			return !(*this == other);
		}

		bool operator<(const Fraction& other) const {
			return numerator * other.denominator < other.numerator * denominator;
		}

		bool operator<=(const Fraction& other) const {
			return *this < other || *this == other;
		}

		bool operator>(const Fraction& other) const {
			return other < *this;
		}

		bool operator>=(const Fraction& other) const {
			return other <= *this;
		}

		// Stream operators
		friend ostream& operator<<(ostream& os, const Fraction& f) {
			os << f.numerator << "/" << f.denominator;
			return os;
		}

		friend istream& operator>>(istream& is, Fraction& f) {
			T num, denom;
			char slash;
			is >> num >> slash >> denom;
			if (denom == 0) {
				throw invalid_argument("Invalid input denominator cannot be zero!!!");
			}
			f = Fraction(num, denom);
			return is;
		}

		void Simplify() {
			simplify();
		}
	};

}

