////스트림 반복자 사용하기
//#include <numeric>
//#include <iostream>
//#include <iterator>
//
//int main() {
//	std::cout << "값으로 구분해서 입력하세요. 종료하려면 Ctrl+Z를 입력하세요:" << std::endl;
//
//	std::cout << "\nThe sum of the values you entered is "
//		<< std::accumulate(std::istream_iterator<double>(std::cin),
//			std::istream_iterator<double>(), 0.0)
//		<< std::endl;
//}