#include "hmc5883l-stm32f4-core.h"

void set_register_bits(uint8_t val, uint8_t pos, uint8_t len, uint8_t *reg)
{
  uint8_t mask = (1 << len) - 1;
  *reg &= ~(mask << pos);
  *reg |= (val << pos); 
}