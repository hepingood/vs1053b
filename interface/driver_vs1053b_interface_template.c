/**
 * Copyright (c) 2015 - present LibDriver All rights reserved
 * 
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE. 
 *
 * @file      driver_vs1053b_interface_template.c
 * @brief     driver vs1053b interface template source file
 * @version   1.0.0
 * @author    Shifeng Li
 * @date      2023-06-30
 *
 * <h3>history</h3>
 * <table>
 * <tr><th>Date        <th>Version  <th>Author      <th>Description
 * <tr><td>2023/06/30  <td>1.0      <td>Shifeng Li  <td>first upload
 * </table>
 */

#include "driver_vs1053b_interface.h"

/**
 * @brief  interface spi cmd bus init
 * @return status code
 *         - 0 success
 *         - 1 spi init failed
 * @note   none
 */
uint8_t vs1053b_interface_spi_cmd_init(void)
{
    return 0;
}

/**
 * @brief  interface spi cmd bus deinit
 * @return status code
 *         - 0 success
 *         - 1 spi deinit failed
 * @note   none
 */
uint8_t vs1053b_interface_spi_cmd_deinit(void)
{
    return 0;
}

/**
 * @brief      interface spi cmd bus read
 * @param[in]  reg register address
 * @param[out] *buf pointer to a data buffer
 * @param[in]  len length of data buffer
 * @return     status code
 *             - 0 success
 *             - 1 read failed
 * @note       none
 */
uint8_t vs1053b_interface_spi_cmd_read_address16(uint16_t reg, uint8_t *buf, uint16_t len)
{
    return 0;
}

/**
 * @brief     interface spi cmd bus write
 * @param[in] reg register address
 * @param[in] *buf pointer to a data buffer
 * @param[in] len length of data buffer
 * @return    status code
 *            - 0 success
 *            - 1 write failed
 * @note      none
 */
uint8_t vs1053b_interface_spi_cmd_write_address16(uint16_t reg, uint8_t *buf, uint16_t len)
{
    return 0;
}

/**
 * @brief  interface spi dat bus init
 * @return status code
 *         - 0 success
 *         - 1 spi init failed
 * @note   none
 */
uint8_t vs1053b_interface_spi_dat_init(void)
{
    return 0;
}

/**
 * @brief  interface spi dat bus deinit
 * @return status code
 *         - 0 success
 *         - 1 spi deinit failed
 * @note   none
 */
uint8_t vs1053b_interface_spi_dat_deinit(void)
{
    return 0;
}

/**
 * @brief     interface spi dat bus write command
 * @param[in] *buf pointer to a data buffer
 * @param[in] len length of data buffer
 * @return    status code
 *            - 0 success
 *            - 1 write failed
 * @note      none
 */
uint8_t vs1053b_interface_spi_dat_write_cmd(uint8_t *buf, uint16_t len)
{
    return 0;
}

/**
 * @brief      interface audio init
 * @param[in]  type open type, 0 is read and 1 is write.
 * @param[in]  *name pointer to a name buffer
 * @param[out] *size pointer to a file size buffer
 * @return     status code
 *             - 0 success
 *             - 1 audio init failed
 * @note       none
 */
uint8_t vs1053b_interface_audio_init(uint8_t type, char *name, uint32_t *size)
{
    return 0;
}

/**
 * @brief      interface audio read
 * @param[in]  addr mp3 file address
 * @param[in]  size read size
 * @param[out] *buffer pointer to a data buffer
 * @return     status code
 *             - 0 success
 *             - 1 audio read failed
 * @note       none
 */
uint8_t vs1053b_interface_audio_read(uint32_t addr, uint16_t size, uint8_t *buffer)
{
    return 0;
}

/**
 * @brief     interface audio write
 * @param[in] addr mp3 file address
 * @param[in] size write size
 * @param[in] *buffer pointer to a data buffer
 * @return    status code
 *            - 0 success
 *            - 1 audio write failed
 * @note      none
 */
uint8_t vs1053b_interface_audio_write(uint32_t addr, uint16_t size, uint8_t *buffer)
{
    return 0;
}

/**
 * @brief  interface audio deinit
 * @return status code
 *         - 0 success
 *         - 1 audio deinit failed
 * @note   none
 */
uint8_t vs1053b_interface_audio_deinit(void)
{
    return 0;
}

/**
 * @brief      interface timestamp read
 * @param[out] *sec pointer to a second buffer
 * @param[out] *us pointer to a microsecond buffer
 * @return     status code
 *             - 0 success
 *             - 1 timestamp read failed
 * @note       none
 */
void vs1053b_interface_timestamp_read(uint32_t *sec, uint32_t *us)
{
    
}

/**
 * @brief  interface reset gpio init
 * @return status code
 *         - 0 success
 *         - 1 init failed
 * @note   none
 */
uint8_t vs1053b_interface_reset_gpio_init(void)
{
    return 0;
}

/**
 * @brief  interface reset gpio deinit
 * @return status code
 *         - 0 success
 *         - 1 deinit failed
 * @note   none
 */
uint8_t vs1053b_interface_reset_gpio_deinit(void)
{
    return 0;
}

/**
 * @brief     interface reset gpio write
 * @param[in] data written data
 * @return    status code
 *            - 0 success
 *            - 1 write failed
 * @note      none
 */
uint8_t vs1053b_interface_reset_gpio_write(uint8_t data)
{
    return 0;
}

/**
 * @brief  interface dreq gpio init
 * @return status code
 *         - 0 success
 *         - 1 init failed
 * @note   none
 */
uint8_t vs1053b_interface_dreq_gpio_init(void)
{
    return 0;
}

/**
 * @brief  interface dreq gpio deinit
 * @return status code
 *         - 0 success
 *         - 1 deinit failed
 * @note   none
 */
uint8_t vs1053b_interface_dreq_gpio_deinit(void)
{
    return 0;
}

/**
 * @brief      interface dreq gpio read
 * @param[out] *data pointer to a data buffer
 * @return     status code
 *             - 0 success
 *             - 1 read failed
 * @note       none
 */
uint8_t vs1053b_interface_dreq_gpio_read(uint8_t *data)
{
    return 0;
}

/**
 * @brief     interface delay ms
 * @param[in] ms time
 * @note      none
 */
void vs1053b_interface_delay_ms(uint32_t ms)
{
    
}

/**
 * @brief     interface print format data
 * @param[in] fmt format data
 * @note      none
 */
void vs1053b_interface_debug_print(const char *const fmt, ...)
{
    
}

/**
 * @brief     interface receive callback
 * @param[in] type receive callback type
 * @param[in] cur_pos current position
 * @note      none
 */
void vs1053b_interface_receive_callback(uint8_t type, uint32_t cur_pos)
{
    switch (type)
    {
        case VS1053B_TYPE_PLAY_READ :
        {
            vs1053b_interface_debug_print("vs1053b: irq read data during playing with %d.\n", cur_pos);
            
            break;
        }
        case VS1053B_TYPE_PLAY_WRITE :
        {
            vs1053b_interface_debug_print("vs1053b: irq write data during playing with %d.\n", cur_pos);
            
            break;
        }
        case VS1053B_TYPE_PLAY_END :
        {
            vs1053b_interface_debug_print("vs1053b: irq play end with %d.\n", cur_pos);
            
            break;
        }
        case VS1053B_TYPE_RECORD_READ :
        {
            vs1053b_interface_debug_print("vs1053b: irq read data during recording with %d.\n", cur_pos);
            
            break;
        }
        case VS1053B_TYPE_RECORD_WRITE :
        {
            vs1053b_interface_debug_print("vs1053b: irq write data during recording with %d.\n", cur_pos);
            
            break;
        }
        case VS1053B_TYPE_RECORD_END :
        {
            vs1053b_interface_debug_print("vs1053b: irq record end with %d.\n", cur_pos);
            
            break;
        }
        case VS1053B_TYPE_RECORD_OVER :
        {
            vs1053b_interface_debug_print("vs1053b: irq record over buffer with %d.\n", cur_pos);
            
            break;
        }
        case VS1053B_TYPE_PERIOD :
        {
            vs1053b_interface_debug_print("vs1053b: irq period.\n");
            
            break;
        }
        default :
        {
            vs1053b_interface_debug_print("vs1053b: unknown type.\n");
            
            break;
        }
    }
}
