#include <stdio.h>
#include "malloc.h"
#include "String.h"
#include "math.h"
typedef struct
{
    unsigned char sck_pin;      ///< SCK pin number.
    unsigned char mosi_pin;     ///< MOSI pin number (optional).
                                /**< Set to @ref NRF_DRV_SPI_PIN_NOT_USED
                                 *   if this signal is not needed. */
    unsigned char miso_pin;     ///< MISO pin number (optional).
                                /**< Set to @ref NRF_DRV_SPI_PIN_NOT_USED
                                 *   if this signal is not needed. */
    unsigned char ss_pin;       ///< Slave Select pin number (optional).
                                /**< Set to @ref NRF_DRV_SPI_PIN_NOT_USED
                                 *   if this signal is not needed. The driver
                                 *   supports only active low for this signal.
                                 *   If the signal should be active high,
                                 *   it must be controlled externally. */
    unsigned char irq_priority; ///< Interrupt priority.
    unsigned char orc;          ///< Over-run character.
                                /**< This character is used when all bytes from the TX buffer are sent,
                                     but the transfer continues due to RX. */

} nrf_drv_spi_config_t;
#define NRF_DRV_SPI_DEFAULT_CONFIG \
    {                              \
        .sck_pin = 1,              \
        .mosi_pin = 2,             \
        .miso_pin = 3,             \
        .ss_pin = 5,               \
        .irq_priority = 6,         \
        .orc = 0xFF,               \
    } // NRF_SPI_FREQ_1M, NRF_DRV_SPI_FREQ_4M,SPI_FREQUENCY_FREQUENCY_K250,

nrf_drv_spi_config_t spi_config = NRF_DRV_SPI_DEFAULT_CONFIG;
void main(void)
{

    ////////////////////////////////////////////////////
    printf("%d", spi_config.orc);
}