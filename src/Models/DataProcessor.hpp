#ifndef DATAPROCESSOR_HPP
#define DATAPROCESSOR_HPP

#include <iostream>

template <typename T1, typename T2>
class DataProcessor {
public:
    DataProcessor(const T1& initialData1, const T2& initialData2);

    void processData();

    // Getter methods
    T1 getData1() const { return data1; }
    T2 getData2() const { return data2; }

private:
    T1 data1;
    T2 data2;
};

#include "DataProcessor.cpp"

#endif // DATAPROCESSOR_HPP
