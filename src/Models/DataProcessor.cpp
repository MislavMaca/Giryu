#include "DataProcessor.hpp"

template <typename T1, typename T2>
DataProcessor<T1, T2>::DataProcessor(const T1 &initialData1, const T2 &initialData2)
    : data1(initialData1), data2(initialData2) {}

template <typename T1, typename T2>
void DataProcessor<T1, T2>::processData()
{
    data1 = data1 + data2;
}

template class DataProcessor<int, double>;
template class DataProcessor<std::string, std::string>;
