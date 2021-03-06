#ifndef FIFO_H_
#define FIFO_H_

#include "stm32f10x.h"

#define BUF_SIZE 15

typedef struct
{
  uint8_t Buf[BUF_SIZE];
  volatile uint8_t HeadIndex;
  volatile uint8_t TailIndex;
} FIFO_type;

uint8_t FIFO_IsEmpty(FIFO_type *fifo);
void FIFO_Put(FIFO_type *fifo, uint8_t data);
uint8_t FIFO_Pop(FIFO_type *fifo);


#endif /* FIFO_H_ */
