//// Ex1_03.cpp
////�˰����� �Լ��� �����ϱ�
//#include <iostream>
//#include <algorithm> //transform()
//#include <iterator>
//#include <functional>
//
//
//class Root
//{
//public:
//	double operator()(double x) { return std::sqrt(x); };
//};
//
//int main() {
//	double data[]{ 1.5, 2.5, 3.5, 4.5, 5.5 };
//
//	//�Լ� ��ü �����ϱ�
//	Root root;
//	std::cout << "Square roots are :" << std::endl;
//	std::transform(std::begin(data), std::end(data), std::ostream_iterator<double>(std::cout, " "), root);
//
//	//���� ǥ������ �μ��� ����ϱ�
//	std::cout << "\n\nCubes are: " << std::endl;
//	std::transform(std::begin(data), std::end(data), std::ostream_iterator<double>(std::cout, " "), [](double x) {return x*x*x; });
//
//	//std::function<> Ÿ���� ������ �μ��� ����ϱ�
//	std::function<double(double)> op{ [](double x) {return x*x; } };
//	std::cout << "\n\nSquares are : " << std::endl;
//	std::transform(std::begin(data), std::end(data), std::ostream_iterator<double>(std::cout, " "), op);
//
//	//�ٸ� ���� ǥ������ ȣ���ϴ� ���� ǥ������ �μ��� ����ϱ�
//	std::cout << "\n\n4th powers are : " << std::endl;
//	std::transform(std::begin(data), std::end(data), std::ostream_iterator<double>(std::cout, " "), [&op](double x) {return op(x) * op(x); });
//	std::cout << std::endl;
//}