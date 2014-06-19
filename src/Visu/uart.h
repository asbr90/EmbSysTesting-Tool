/**
  * @author Artjom Siebert
  * @date   19.06.14
  * @brief  Class which contain the uart specific settings and hold on the connection.
  */

#ifndef UART_H
#define UART_H

/**
  * @brief specific connection macros
  */
#define PARITYBIT1      1
#define PARITYBIT15     1.5
#define PARITYBIT2      2

#define DIR_INPUT       0
#define DIR_OUTPUT      1

#define PARITY_NONE     0
#define PARITY_ODD      1
#define PARITY_EVEN     2


class UART
{
public:
    /**
      * @brief Create new communication port.
      */
    UART(long Baudrate, float Stopbits, int Paritybits, bool Direction);
private:
      long  Baudrate;
      float Stopbits;
      int   Paritybits;
      bool  Direction;
};

#endif // UART_H
