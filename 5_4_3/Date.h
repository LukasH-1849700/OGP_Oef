#pragma once
class Date
{
public:
	Date(int day, int month, int year);
	Date() = default;

	int getDag() const;
	int getMaand() const;
	int getJaar() const;

	void setDag(int dag);
	void setMaand(int maand);
	void setJaar(int jaar);

private:
	int m_dag, m_maand, m_jaar;

};
