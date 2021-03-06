#include <cmath>
#include <vector>

//(5) ??? 49, ???57 ??? ???????
inline double formula(double x, double v, double alpha, double sigma)
{
	return -0.6 * sigma * sqrt(2 * 9.81) * 1 / (tan(alpha / 2) * tan(alpha / 2)) * 1 /( 3.14 * pow(v, 3 / 2));
}

inline double k1(double x, double v, double alpha, double sigma)
{
	return formula(x, v, alpha, sigma);
}
//
inline double newVnext(double x, double v, double h, double alpha, double sigma)
{
	double nk1 = formula(x, v, alpha, sigma);
	double nk2 = formula(x + h / 2, v + (h / 2) * nk1, alpha, sigma);
	double nk3 = formula(x + h, v + h * ((-1) * nk1 + 2 * nk2), alpha, sigma);
	return (v + (h / 6) * (nk1 + 4 * nk2 + nk3));
}
//
inline double k2(double x, double v, double h,double alpha,double sigma)
{
	return formula(x + h / 2, v + (h / 2) * k1(x, v, alpha, sigma),alpha, sigma);
}

inline double k3(double x, double v, double h, double alpha, double sigma)
{
	return formula(x + h, v + h * ((k1(x, v, alpha, sigma) * (-1) + 2 * k2(x, v, h, alpha, sigma)), alpha, sigma), alpha, sigma);
}

inline double xNext(double x, double h)
{
	return x + h;
}



inline double vNext(double x, double v, double h, double alpha, double sigma)
{
	//return v + (h / 6) * (k1(x, v, alpha, sigma) + 4 * k2(x, v, h, alpha, sigma) + k3(x, v, h, alpha, sigma));
	return newVnext(x, v, h, alpha, sigma);
}

inline double solve(double x, double v, double h, double sigma, double alpha)
{
	return vNext(x, v, h, alpha, sigma);
	//return newVnext(x, v, h, alpha, sigma);
}

inline double vkrNext(double x, double v, double h, double alpha, double sigma)
{
	h /= 2;
	//v = vNext(x, v, h, alpha, sigma);
	v = newVnext(x,v,h,alpha,sigma);
	x = xNext(x, h);
	return vNext(x, v, h, alpha, sigma);
}


