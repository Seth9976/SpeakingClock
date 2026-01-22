// 函数: sub_4235e8
// 地址: 0x4235e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if ((*(ebx + 0x1c) & 8) != 0)
    return 

*(ebx + 0x1c) |= 8
arg1 = *(ebx + 0x10)

if (arg1 == 0)
    return 

int32_t esi_2 = *(arg1 + 8) - 1

if (esi_2 s< 0)
    return 

int32_t i_1 = esi_2 + 1
int32_t edi_1 = 0
int32_t i

do
    sub_41a0f4(*(ebx + 0x10), edi_1)
    sub_4235e8()
    edi_1 += 1
    i = i_1
    i_1 -= 1
while (i != 1)
