#include "dateClass.h"

date::date() : month{january}, day{1}, year{2019}
{}
date::date(months month, int day, int year) : month{month}, day{day}, year{year}
{}