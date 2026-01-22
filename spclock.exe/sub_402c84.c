// 函数: sub_402c84
// 地址: 0x402c84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i_2 = 0x37
void** ebx = &data_4aa060
int32_t i

do
    if (*ebx == 0)
        *ebx = sub_401548
    
    ebx[-2] = &ebx[-7]
    ebx[-6] = &ebx[-7]
    ebx[-4] = 0
    ebx[-5] = 1
    int32_t eax_9 = ((zx.d(*(ebx - 0x1a)) * 0xc + 0xef) & 0xffffff00) + 0x30
    
    if (eax_9 u< 0xb30)
        eax_9 = 0xb30
    
    uint32_t eax_11 = (eax_9 + 0x4d0) u>> 0xd
    
    if (eax_11 u> 7)
        eax_11 = 7
    
    *(ebx - 0x1b) = 0xff << eax_11.b
    ebx[-1].w = (eax_11 << 0xd).w + 0xb30
    int16_t edi_1 = *(ebx - 0x1a)
    int32_t ecx_7 = ((zx.d(edi_1) * 0x30 + 0xef) & 0xffffff00) + 0x30
    
    if (ecx_7 u< 0x7330)
        ecx_7 = 0x7330
    
    if (ecx_7 u> 0xff30)
        ecx_7 = 0xff30
    
    char temp3_1
    uint16_t temp4_1
    temp3_1:temp4_1 = muls.dp.w((divu.dp.d(0:(ecx_7 - 0x20), zx.d(edi_1))).w, edi_1)
    *(ebx - 2) = ((temp4_1 + 0xef) & 0xff00) + 0x30
    ebx = &ebx[8]
    i = i_2
    i_2 -= 1
while (i != 1)
sub_402c40()
data_4ad704 = &data_4ad704
data_4ad708 = &data_4ad704
int32_t i_3 = 0x400
void* result_1 = &data_4ad7a4
void* result
int32_t i_1

do
    result = result_1
    *result = result
    *(result + 4) = result
    result_1 += 8
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
data_4af7a8 = &data_4af7a8
data_4af7ac = &data_4af7a8
return result
