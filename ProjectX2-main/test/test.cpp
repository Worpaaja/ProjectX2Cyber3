#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  FuzzedDataProvider fuzzed_data(data, size);
  
  if (fuzzed_data.remaining_bytes() > 0) {
  	
  	float num1 = fuzzed_data.ConsumeFloatingPoint<float>();
  	float num2 = fuzzed_data.ConsumeFloatingPoint<float>();
  	
	int charnum = fuzzed_data.ConsumeIntegralInRange<int>(-128, 127);
	char oper = char(charnum);  
  	  	
  	calculator(num1, '+', num2);
  	calculator(num1, '-', num2);
  	calculator(num1, '*', num2);
  	calculator(num1, '/', num2);
  	calculator(num1, oper, num2);
  } else {
  	calculator(1, '^', 1);
  }
}
